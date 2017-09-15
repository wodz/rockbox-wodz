/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * atj213x version: 1.1
 * atj213x authors: Marcin Bukat
 *
 * Copyright (C) 2015 by the authors
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
#ifndef __HEADERGEN_REGS_I2C_H__
#define __HEADERGEN_REGS_I2C_H__

#define I2C_CTL(_n1)                    (*(volatile uint32_t *)I2C_CTL_ADDR(_n1))
#define I2C_CTL_ADDR(_n1)               (0xb0180000 + ((_n1))*0x20 + 0x0)
#define BP_I2C_CTL_RESERVED31_9         9
#define BM_I2C_CTL_RESERVED31_9         0xfffffe00
#define BF_I2C_CTL_RESERVED31_9(v)      (((v) & 0x7fffff) << 9)
#define BFM_I2C_CTL_RESERVED31_9(v)     BM_I2C_CTL_RESERVED31_9
#define BF_I2C_CTL_RESERVED31_9_V(e)    BF_I2C_CTL_RESERVED31_9(BV_I2C_CTL_RESERVED31_9__##e)
#define BFM_I2C_CTL_RESERVED31_9_V(v)   BM_I2C_CTL_RESERVED31_9
#define BP_I2C_CTL_PUEN                 8
#define BM_I2C_CTL_PUEN                 0x100
#define BF_I2C_CTL_PUEN(v)              (((v) & 0x1) << 8)
#define BFM_I2C_CTL_PUEN(v)             BM_I2C_CTL_PUEN
#define BF_I2C_CTL_PUEN_V(e)            BF_I2C_CTL_PUEN(BV_I2C_CTL_PUEN__##e)
#define BFM_I2C_CTL_PUEN_V(v)           BM_I2C_CTL_PUEN
#define BP_I2C_CTL_EN                   7
#define BM_I2C_CTL_EN                   0x80
#define BF_I2C_CTL_EN(v)                (((v) & 0x1) << 7)
#define BFM_I2C_CTL_EN(v)               BM_I2C_CTL_EN
#define BF_I2C_CTL_EN_V(e)              BF_I2C_CTL_EN(BV_I2C_CTL_EN__##e)
#define BFM_I2C_CTL_EN_V(v)             BM_I2C_CTL_EN
#define BP_I2C_CTL_SIE                  6
#define BM_I2C_CTL_SIE                  0x40
#define BF_I2C_CTL_SIE(v)               (((v) & 0x1) << 6)
#define BFM_I2C_CTL_SIE(v)              BM_I2C_CTL_SIE
#define BF_I2C_CTL_SIE_V(e)             BF_I2C_CTL_SIE(BV_I2C_CTL_SIE__##e)
#define BFM_I2C_CTL_SIE_V(v)            BM_I2C_CTL_SIE
#define BP_I2C_CTL_IRQE                 5
#define BM_I2C_CTL_IRQE                 0x20
#define BF_I2C_CTL_IRQE(v)              (((v) & 0x1) << 5)
#define BFM_I2C_CTL_IRQE(v)             BM_I2C_CTL_IRQE
#define BF_I2C_CTL_IRQE_V(e)            BF_I2C_CTL_IRQE(BV_I2C_CTL_IRQE__##e)
#define BFM_I2C_CTL_IRQE_V(v)           BM_I2C_CTL_IRQE
#define BP_I2C_CTL_MS                   4
#define BM_I2C_CTL_MS                   0x10
#define BV_I2C_CTL_MS__MASTER           0x0
#define BV_I2C_CTL_MS__SLAVE            0x1
#define BF_I2C_CTL_MS(v)                (((v) & 0x1) << 4)
#define BFM_I2C_CTL_MS(v)               BM_I2C_CTL_MS
#define BF_I2C_CTL_MS_V(e)              BF_I2C_CTL_MS(BV_I2C_CTL_MS__##e)
#define BFM_I2C_CTL_MS_V(v)             BM_I2C_CTL_MS
#define BP_I2C_CTL_GBCC                 2
#define BM_I2C_CTL_GBCC                 0xc
#define BV_I2C_CTL_GBCC__NOP            0x0
#define BV_I2C_CTL_GBCC__START          0x1
#define BV_I2C_CTL_GBCC__STOP           0x2
#define BV_I2C_CTL_GBCC__REPEATED_START 0x3
#define BF_I2C_CTL_GBCC(v)              (((v) & 0x3) << 2)
#define BFM_I2C_CTL_GBCC(v)             BM_I2C_CTL_GBCC
#define BF_I2C_CTL_GBCC_V(e)            BF_I2C_CTL_GBCC(BV_I2C_CTL_GBCC__##e)
#define BFM_I2C_CTL_GBCC_V(v)           BM_I2C_CTL_GBCC
#define BP_I2C_CTL_RB                   1
#define BM_I2C_CTL_RB                   0x2
#define BF_I2C_CTL_RB(v)                (((v) & 0x1) << 1)
#define BFM_I2C_CTL_RB(v)               BM_I2C_CTL_RB
#define BF_I2C_CTL_RB_V(e)              BF_I2C_CTL_RB(BV_I2C_CTL_RB__##e)
#define BFM_I2C_CTL_RB_V(v)             BM_I2C_CTL_RB
#define BP_I2C_CTL_GRAS                 0
#define BM_I2C_CTL_GRAS                 0x1
#define BF_I2C_CTL_GRAS(v)              (((v) & 0x1) << 0)
#define BFM_I2C_CTL_GRAS(v)             BM_I2C_CTL_GRAS
#define BF_I2C_CTL_GRAS_V(e)            BF_I2C_CTL_GRAS(BV_I2C_CTL_GRAS__##e)
#define BFM_I2C_CTL_GRAS_V(v)           BM_I2C_CTL_GRAS

#define I2C_CLKDIV(_n1)                     (*(volatile uint32_t *)I2C_CLKDIV_ADDR(_n1))
#define I2C_CLKDIV_ADDR(_n1)                (0xb0180000 + ((_n1))*0x20 + 0x4)
#define BP_I2C_CLKDIV_RESERVED31_8          8
#define BM_I2C_CLKDIV_RESERVED31_8          0xffffff00
#define BF_I2C_CLKDIV_RESERVED31_8(v)       (((v) & 0xffffff) << 8)
#define BFM_I2C_CLKDIV_RESERVED31_8(v)      BM_I2C_CLKDIV_RESERVED31_8
#define BF_I2C_CLKDIV_RESERVED31_8_V(e)     BF_I2C_CLKDIV_RESERVED31_8(BV_I2C_CLKDIV_RESERVED31_8__##e)
#define BFM_I2C_CLKDIV_RESERVED31_8_V(v)    BM_I2C_CLKDIV_RESERVED31_8
#define BP_I2C_CLKDIV_CLKDIV                0
#define BM_I2C_CLKDIV_CLKDIV                0xff
#define BF_I2C_CLKDIV_CLKDIV(v)             (((v) & 0xff) << 0)
#define BFM_I2C_CLKDIV_CLKDIV(v)            BM_I2C_CLKDIV_CLKDIV
#define BF_I2C_CLKDIV_CLKDIV_V(e)           BF_I2C_CLKDIV_CLKDIV(BV_I2C_CLKDIV_CLKDIV__##e)
#define BFM_I2C_CLKDIV_CLKDIV_V(v)          BM_I2C_CLKDIV_CLKDIV

#define I2C_STAT(_n1)                   (*(volatile uint32_t *)I2C_STAT_ADDR(_n1))
#define I2C_STAT_ADDR(_n1)              (0xb0180000 + ((_n1))*0x20 + 0x8)
#define BP_I2C_STAT_RESERVED31_8        8
#define BM_I2C_STAT_RESERVED31_8        0xffffff00
#define BF_I2C_STAT_RESERVED31_8(v)     (((v) & 0xffffff) << 8)
#define BFM_I2C_STAT_RESERVED31_8(v)    BM_I2C_STAT_RESERVED31_8
#define BF_I2C_STAT_RESERVED31_8_V(e)   BF_I2C_STAT_RESERVED31_8(BV_I2C_STAT_RESERVED31_8__##e)
#define BFM_I2C_STAT_RESERVED31_8_V(v)  BM_I2C_STAT_RESERVED31_8
#define BP_I2C_STAT_TRC                 7
#define BM_I2C_STAT_TRC                 0x80
#define BF_I2C_STAT_TRC(v)              (((v) & 0x1) << 7)
#define BFM_I2C_STAT_TRC(v)             BM_I2C_STAT_TRC
#define BF_I2C_STAT_TRC_V(e)            BF_I2C_STAT_TRC(BV_I2C_STAT_TRC__##e)
#define BFM_I2C_STAT_TRC_V(v)           BM_I2C_STAT_TRC
#define BP_I2C_STAT_STPD                6
#define BM_I2C_STAT_STPD                0x40
#define BF_I2C_STAT_STPD(v)             (((v) & 0x1) << 6)
#define BFM_I2C_STAT_STPD(v)            BM_I2C_STAT_STPD
#define BF_I2C_STAT_STPD_V(e)           BF_I2C_STAT_STPD(BV_I2C_STAT_STPD__##e)
#define BFM_I2C_STAT_STPD_V(v)          BM_I2C_STAT_STPD
#define BP_I2C_STAT_STAD                5
#define BM_I2C_STAT_STAD                0x20
#define BF_I2C_STAT_STAD(v)             (((v) & 0x1) << 5)
#define BFM_I2C_STAT_STAD(v)            BM_I2C_STAT_STAD
#define BF_I2C_STAT_STAD_V(e)           BF_I2C_STAT_STAD(BV_I2C_STAT_STAD__##e)
#define BFM_I2C_STAT_STAD_V(v)          BM_I2C_STAT_STAD
#define BP_I2C_STAT_RWST                4
#define BM_I2C_STAT_RWST                0x10
#define BF_I2C_STAT_RWST(v)             (((v) & 0x1) << 4)
#define BFM_I2C_STAT_RWST(v)            BM_I2C_STAT_RWST
#define BF_I2C_STAT_RWST_V(e)           BF_I2C_STAT_RWST(BV_I2C_STAT_RWST__##e)
#define BFM_I2C_STAT_RWST_V(v)          BM_I2C_STAT_RWST
#define BP_I2C_STAT_LBST                3
#define BM_I2C_STAT_LBST                0x8
#define BF_I2C_STAT_LBST(v)             (((v) & 0x1) << 3)
#define BFM_I2C_STAT_LBST(v)            BM_I2C_STAT_LBST
#define BF_I2C_STAT_LBST_V(e)           BF_I2C_STAT_LBST(BV_I2C_STAT_LBST__##e)
#define BFM_I2C_STAT_LBST_V(v)          BM_I2C_STAT_LBST
#define BP_I2C_STAT_IRQP                2
#define BM_I2C_STAT_IRQP                0x4
#define BF_I2C_STAT_IRQP(v)             (((v) & 0x1) << 2)
#define BFM_I2C_STAT_IRQP(v)            BM_I2C_STAT_IRQP
#define BF_I2C_STAT_IRQP_V(e)           BF_I2C_STAT_IRQP(BV_I2C_STAT_IRQP__##e)
#define BFM_I2C_STAT_IRQP_V(v)          BM_I2C_STAT_IRQP
#define BP_I2C_STAT_OVST                1
#define BM_I2C_STAT_OVST                0x2
#define BF_I2C_STAT_OVST(v)             (((v) & 0x1) << 1)
#define BFM_I2C_STAT_OVST(v)            BM_I2C_STAT_OVST
#define BF_I2C_STAT_OVST_V(e)           BF_I2C_STAT_OVST(BV_I2C_STAT_OVST__##e)
#define BFM_I2C_STAT_OVST_V(v)          BM_I2C_STAT_OVST
#define BP_I2C_STAT_WCO                 0
#define BM_I2C_STAT_WCO                 0x1
#define BF_I2C_STAT_WCO(v)              (((v) & 0x1) << 0)
#define BFM_I2C_STAT_WCO(v)             BM_I2C_STAT_WCO
#define BF_I2C_STAT_WCO_V(e)            BF_I2C_STAT_WCO(BV_I2C_STAT_WCO__##e)
#define BFM_I2C_STAT_WCO_V(v)           BM_I2C_STAT_WCO

#define I2C_ADDR(_n1)                   (*(volatile uint32_t *)I2C_ADDR_ADDR(_n1))
#define I2C_ADDR_ADDR(_n1)              (0xb0180000 + ((_n1))*0x20 + 0xc)
#define BP_I2C_ADDR_RESERVED31_8        8
#define BM_I2C_ADDR_RESERVED31_8        0xffffff00
#define BF_I2C_ADDR_RESERVED31_8(v)     (((v) & 0xffffff) << 8)
#define BFM_I2C_ADDR_RESERVED31_8(v)    BM_I2C_ADDR_RESERVED31_8
#define BF_I2C_ADDR_RESERVED31_8_V(e)   BF_I2C_ADDR_RESERVED31_8(BV_I2C_ADDR_RESERVED31_8__##e)
#define BFM_I2C_ADDR_RESERVED31_8_V(v)  BM_I2C_ADDR_RESERVED31_8
#define BP_I2C_ADDR_SDAD                1
#define BM_I2C_ADDR_SDAD                0xfe
#define BF_I2C_ADDR_SDAD(v)             (((v) & 0x7f) << 1)
#define BFM_I2C_ADDR_SDAD(v)            BM_I2C_ADDR_SDAD
#define BF_I2C_ADDR_SDAD_V(e)           BF_I2C_ADDR_SDAD(BV_I2C_ADDR_SDAD__##e)
#define BFM_I2C_ADDR_SDAD_V(v)          BM_I2C_ADDR_SDAD
#define BP_I2C_ADDR_RWCM                0
#define BM_I2C_ADDR_RWCM                0x1
#define BF_I2C_ADDR_RWCM(v)             (((v) & 0x1) << 0)
#define BFM_I2C_ADDR_RWCM(v)            BM_I2C_ADDR_RWCM
#define BF_I2C_ADDR_RWCM_V(e)           BF_I2C_ADDR_RWCM(BV_I2C_ADDR_RWCM__##e)
#define BFM_I2C_ADDR_RWCM_V(v)          BM_I2C_ADDR_RWCM

#define I2C_DAT(_n1)                    (*(volatile uint32_t *)I2C_DAT_ADDR(_n1))
#define I2C_DAT_ADDR(_n1)               (0xb0180000 + ((_n1))*0x20 + 0x10)
#define BP_I2C_DAT_RESERVED31_8         8
#define BM_I2C_DAT_RESERVED31_8         0xffffff00
#define BF_I2C_DAT_RESERVED31_8(v)      (((v) & 0xffffff) << 8)
#define BFM_I2C_DAT_RESERVED31_8(v)     BM_I2C_DAT_RESERVED31_8
#define BF_I2C_DAT_RESERVED31_8_V(e)    BF_I2C_DAT_RESERVED31_8(BV_I2C_DAT_RESERVED31_8__##e)
#define BFM_I2C_DAT_RESERVED31_8_V(v)   BM_I2C_DAT_RESERVED31_8
#define BP_I2C_DAT_TXRXDAT              0
#define BM_I2C_DAT_TXRXDAT              0xff
#define BF_I2C_DAT_TXRXDAT(v)           (((v) & 0xff) << 0)
#define BFM_I2C_DAT_TXRXDAT(v)          BM_I2C_DAT_TXRXDAT
#define BF_I2C_DAT_TXRXDAT_V(e)         BF_I2C_DAT_TXRXDAT(BV_I2C_DAT_TXRXDAT__##e)
#define BFM_I2C_DAT_TXRXDAT_V(v)        BM_I2C_DAT_TXRXDAT

#endif /* __HEADERGEN_REGS_I2C_H__*/
