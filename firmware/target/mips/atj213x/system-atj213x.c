/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2015 by Marcin Bukat
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

#include "kernel.h"
#include "system.h"
#include "panic.h"
#include "button.h"
#include "system-target.h"

#define default_interrupt(name) \
  extern __attribute__((weak,alias("UIRQ"))) void name (void)

default_interrupt(INT_MCA);
default_interrupt(INT_SD);
default_interrupt(INT_MHA);
default_interrupt(INT_USB);
default_interrupt(INT_DSP);
default_interrupt(INT_PCNT);
default_interrupt(INT_WD);
default_interrupt(INT_T1);
default_interrupt(INT_T0);
default_interrupt(INT_RTC);
default_interrupt(INT_DMA);
default_interrupt(INT_KEY);
default_interrupt(INT_EXT);
default_interrupt(INT_IIC2);
default_interrupt(INT_IIC1);
default_interrupt(INT_ADC);
default_interrupt(INT_DAC);
default_interrupt(INT_NAND);
default_interrupt(INT_YUV);

/* TRICK ALERT !!!!
 * The table is organized in reversed order so
 * clz on INTC_PD returns the index in this table
 */
void (* const irqvector[])(void) __attribute__((used)) =
{
    UIRQ, UIRQ, UIRQ, UIRQ, UIRQ, INT_YUV, UIRQ, INT_NAND,
    UIRQ, INT_DAC, INT_ADC, UIRQ, UIRQ, INT_IIC1, INT_IIC2, UIRQ,
    UIRQ, INT_EXT, INT_KEY, INT_DMA, INT_RTC, INT_T0, INT_T1, INT_WD,
    INT_PCNT, UIRQ, INT_DSP, INT_USB, INT_MHA, INT_SD, UIRQ, INT_MCA
};

static const char * const irqname[] =
{
    "IRQ31","IRQ30","IRQ29","IRQ28","IRQ27","INT_YUV","IRQ25","INT_NAND",
    "IRQ23","INT_DAC","INT_ADC","IRQ20","IRQ19","INT_IIC1","INT_IIC2","IRQ16",
    "IRQ15","INT_EXT","INT_KEY","INT_DMA","INT_RTC","INT_T0","INT_T1","INT_WD",
    "INT_PCNT","IRQ6","INT_DSP","INT_USB","INT_MHA","INT_SD","UIRQ1","INT_MCA"
};

/* The irqno parameter is set by irq handler
 * we hack things up so we get this parameter
 * even if function is declared (void).
 */
static void UIRQ(void)
{
    unsigned int irqno;
    asm volatile("move %0, $4\n" : "=r" (irqno)); 
    panicf("Unhandled IRQ: %s", irqname[irqno]);
}

void system_init(void)
{
}

void system_reboot(void)
{
}

void system_exception_wait(void)
{
    /* wait until button release (if a button is pressed) */
    while(button_read_device());
    /* then wait until next button press */
    while(!button_read_device());
}

int system_memory_guard(int newmode)
{
    (void)newmode;
    return 0;
}

#ifdef HAVE_ADJUSTABLE_CPU_FREQ
void set_cpu_frequency(long frequency)
{
    if (cpu_frequency == frequency)
        return;

    if (frequency == CPUFREQ_MAX)
    {
    }
    else
    {
    }

    cpu_frequency = frequency;
}
#endif
#define CPU_FREQ 60000000UL //???
void udelay(unsigned int usec)
{
    unsigned int i = ((usec * CPU_FREQ) / 2000000);
    asm volatile (
                  ".set noreorder    \n"
                  "1:                \n"
                  "bne  %0, $0, 1b   \n"
                  "addiu %0, %0, -1  \n"
                  ".set reorder      \n"
                  : "=r" (i)
                  : "0" (i)
                 );
}

void mdelay(unsigned int msec)
{
    unsigned int i;
    for(i=0; i<msec; i++)
        udelay(1000);
}

