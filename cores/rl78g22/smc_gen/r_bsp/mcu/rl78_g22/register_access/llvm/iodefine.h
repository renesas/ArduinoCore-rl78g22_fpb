/************************************************************************/
/* Header file generated from device file:                              */
/*    DR7F102GGE.DVF                                                    */
/*    E1.00b (2022/06/16)                                               */
/*    Copyright(C) 2022 Renesas                                         */
/* Tool Version: 4.0.11                                                 */
/* Date Generated: 2022/07/25                                           */
/************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() asm("di")
#define EI() asm("ei")
#define HALT() asm("halt")
#define NOP() asm("nop")
#define STOP() asm("stop")

#endif

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_H
#define IODEFINE_H

/*
 IO Registers
 */
union un_p0 {
	unsigned char p0;
	__BITS8 BIT;
};
union un_p1 {
	unsigned char p1;
	__BITS8 BIT;
};
union un_p2 {
	unsigned char p2;
	__BITS8 BIT;
};
union un_p3 {
	unsigned char p3;
	__BITS8 BIT;
};
union un_p4 {
	unsigned char p4;
	__BITS8 BIT;
};
union un_p5 {
	unsigned char p5;
	__BITS8 BIT;
};
union un_p6 {
	unsigned char p6;
	__BITS8 BIT;
};
union un_p7 {
	unsigned char p7;
	__BITS8 BIT;
};
union un_p12 {
	unsigned char p12;
	__BITS8 BIT;
};
union un_p13 {
	unsigned char p13;
	__BITS8 BIT;
};
union un_p14 {
	unsigned char p14;
	__BITS8 BIT;
};
union un_pm0 {
	unsigned char pm0;
	__BITS8 BIT;
};
union un_pm1 {
	unsigned char pm1;
	__BITS8 BIT;
};
union un_pm2 {
	unsigned char pm2;
	__BITS8 BIT;
};
union un_pm3 {
	unsigned char pm3;
	__BITS8 BIT;
};
union un_pm4 {
	unsigned char pm4;
	__BITS8 BIT;
};
union un_pm5 {
	unsigned char pm5;
	__BITS8 BIT;
};
union un_pm6 {
	unsigned char pm6;
	__BITS8 BIT;
};
union un_pm7 {
	unsigned char pm7;
	__BITS8 BIT;
};
union un_pm12 {
	unsigned char pm12;
	__BITS8 BIT;
};
union un_pm14 {
	unsigned char pm14;
	__BITS8 BIT;
};
union un_adm0 {
	unsigned char adm0;
	__BITS8 BIT;
};
union un_ads {
	unsigned char ads;
	__BITS8 BIT;
};
union un_adm1 {
	unsigned char adm1;
	__BITS8 BIT;
};
union un_krctl {
	unsigned char krctl;
	__BITS8 BIT;
};
union un_krm0 {
	unsigned char krm0;
	__BITS8 BIT;
};
union un_egp0 {
	unsigned char egp0;
	__BITS8 BIT;
};
union un_egn0 {
	unsigned char egn0;
	__BITS8 BIT;
};
union un_egp1 {
	unsigned char egp1;
	__BITS8 BIT;
};
union un_egn1 {
	unsigned char egn1;
	__BITS8 BIT;
};
union un_iics0 {
	unsigned char iics0;
	__BITS8 BIT;
};
union un_iicf0 {
	unsigned char iicf0;
	__BITS8 BIT;
};
union un_csc {
	unsigned char csc;
	__BITS8 BIT;
};
union un_ostc {
	unsigned char ostc;
	__BITS8 BIT;
};
union un_ckc {
	unsigned char ckc;
	__BITS8 BIT;
};
union un_cks0 {
	unsigned char cks0;
	__BITS8 BIT;
};
union un_cks1 {
	unsigned char cks1;
	__BITS8 BIT;
};
union un_cksel {
	unsigned char cksel;
	__BITS8 BIT;
};
union un_lvim {
	unsigned char lvim;
	__BITS8 BIT;
};
union un_lvis {
	unsigned char lvis;
	__BITS8 BIT;
};
union un_if2 {
	unsigned short if2;
	__BITS16 BIT;
};
union un_if2l {
	unsigned char if2l;
	__BITS8 BIT;
};
union un_if2h {
	unsigned char if2h;
	__BITS8 BIT;
};
union un_if3 {
	unsigned short if3;
	__BITS16 BIT;
};
union un_if3l {
	unsigned char if3l;
	__BITS8 BIT;
};
union un_mk2 {
	unsigned short mk2;
	__BITS16 BIT;
};
union un_mk2l {
	unsigned char mk2l;
	__BITS8 BIT;
};
union un_mk2h {
	unsigned char mk2h;
	__BITS8 BIT;
};
union un_mk3 {
	unsigned short mk3;
	__BITS16 BIT;
};
union un_mk3l {
	unsigned char mk3l;
	__BITS8 BIT;
};
union un_pr02 {
	unsigned short pr02;
	__BITS16 BIT;
};
union un_pr02l {
	unsigned char pr02l;
	__BITS8 BIT;
};
union un_pr02h {
	unsigned char pr02h;
	__BITS8 BIT;
};
union un_pr03 {
	unsigned short pr03;
	__BITS16 BIT;
};
union un_pr03l {
	unsigned char pr03l;
	__BITS8 BIT;
};
union un_pr12 {
	unsigned short pr12;
	__BITS16 BIT;
};
union un_pr12l {
	unsigned char pr12l;
	__BITS8 BIT;
};
union un_pr12h {
	unsigned char pr12h;
	__BITS8 BIT;
};
union un_pr13 {
	unsigned short pr13;
	__BITS16 BIT;
};
union un_pr13l {
	unsigned char pr13l;
	__BITS8 BIT;
};
union un_if0 {
	unsigned short if0;
	__BITS16 BIT;
};
union un_if0l {
	unsigned char if0l;
	__BITS8 BIT;
};
union un_if0h {
	unsigned char if0h;
	__BITS8 BIT;
};
union un_if1 {
	unsigned short if1;
	__BITS16 BIT;
};
union un_if1l {
	unsigned char if1l;
	__BITS8 BIT;
};
union un_if1h {
	unsigned char if1h;
	__BITS8 BIT;
};
union un_mk0 {
	unsigned short mk0;
	__BITS16 BIT;
};
union un_mk0l {
	unsigned char mk0l;
	__BITS8 BIT;
};
union un_mk0h {
	unsigned char mk0h;
	__BITS8 BIT;
};
union un_mk1 {
	unsigned short mk1;
	__BITS16 BIT;
};
union un_mk1l {
	unsigned char mk1l;
	__BITS8 BIT;
};
union un_mk1h {
	unsigned char mk1h;
	__BITS8 BIT;
};
union un_pr00 {
	unsigned short pr00;
	__BITS16 BIT;
};
union un_pr00l {
	unsigned char pr00l;
	__BITS8 BIT;
};
union un_pr00h {
	unsigned char pr00h;
	__BITS8 BIT;
};
union un_pr01 {
	unsigned short pr01;
	__BITS16 BIT;
};
union un_pr01l {
	unsigned char pr01l;
	__BITS8 BIT;
};
union un_pr01h {
	unsigned char pr01h;
	__BITS8 BIT;
};
union un_pr10 {
	unsigned short pr10;
	__BITS16 BIT;
};
union un_pr10l {
	unsigned char pr10l;
	__BITS8 BIT;
};
union un_pr10h {
	unsigned char pr10h;
	__BITS8 BIT;
};
union un_pr11 {
	unsigned short pr11;
	__BITS16 BIT;
};
union un_pr11l {
	unsigned char pr11l;
	__BITS8 BIT;
};
union un_pr11h {
	unsigned char pr11h;
	__BITS8 BIT;
};
union un_pmc {
	unsigned char pmc;
	__BITS8 BIT;
};

#define P0 (*(volatile union un_p0 *)0xFFF00).p0
#define P0_bit (*(volatile union un_p0 *)0xFFF00).BIT
#define P1 (*(volatile union un_p1 *)0xFFF01).p1
#define P1_bit (*(volatile union un_p1 *)0xFFF01).BIT
#define P2 (*(volatile union un_p2 *)0xFFF02).p2
#define P2_bit (*(volatile union un_p2 *)0xFFF02).BIT
#define P3 (*(volatile union un_p3 *)0xFFF03).p3
#define P3_bit (*(volatile union un_p3 *)0xFFF03).BIT
#define P4 (*(volatile union un_p4 *)0xFFF04).p4
#define P4_bit (*(volatile union un_p4 *)0xFFF04).BIT
#define P5 (*(volatile union un_p5 *)0xFFF05).p5
#define P5_bit (*(volatile union un_p5 *)0xFFF05).BIT
#define P6 (*(volatile union un_p6 *)0xFFF06).p6
#define P6_bit (*(volatile union un_p6 *)0xFFF06).BIT
#define P7 (*(volatile union un_p7 *)0xFFF07).p7
#define P7_bit (*(volatile union un_p7 *)0xFFF07).BIT
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define P14 (*(volatile union un_p14 *)0xFFF0E).p14
#define P14_bit (*(volatile union un_p14 *)0xFFF0E).BIT
#define SDR00 (*(volatile unsigned short *)0xFFF10)
#define SIO00 (*(volatile unsigned char *)0xFFF10)
#define TXD0 (*(volatile unsigned char *)0xFFF10)
#define SDR01 (*(volatile unsigned short *)0xFFF12)
#define SIO01 (*(volatile unsigned char *)0xFFF12)
#define RXD0 (*(volatile unsigned char *)0xFFF12)
#define TDR00 (*(volatile unsigned short *)0xFFF18)
#define TDR01 (*(volatile unsigned short *)0xFFF1A)
#define TDR01L (*(volatile unsigned char *)0xFFF1A)
#define TDR01H (*(volatile unsigned char *)0xFFF1B)
#define ADCR (*(volatile unsigned short *)0xFFF1E)
#define ADCRH (*(volatile unsigned char *)0xFFF1F)
#define PM0 (*(volatile union un_pm0 *)0xFFF20).pm0
#define PM0_bit (*(volatile union un_pm0 *)0xFFF20).BIT
#define PM1 (*(volatile union un_pm1 *)0xFFF21).pm1
#define PM1_bit (*(volatile union un_pm1 *)0xFFF21).BIT
#define PM2 (*(volatile union un_pm2 *)0xFFF22).pm2
#define PM2_bit (*(volatile union un_pm2 *)0xFFF22).BIT
#define PM3 (*(volatile union un_pm3 *)0xFFF23).pm3
#define PM3_bit (*(volatile union un_pm3 *)0xFFF23).BIT
#define PM4 (*(volatile union un_pm4 *)0xFFF24).pm4
#define PM4_bit (*(volatile union un_pm4 *)0xFFF24).BIT
#define PM5 (*(volatile union un_pm5 *)0xFFF25).pm5
#define PM5_bit (*(volatile union un_pm5 *)0xFFF25).BIT
#define PM6 (*(volatile union un_pm6 *)0xFFF26).pm6
#define PM6_bit (*(volatile union un_pm6 *)0xFFF26).BIT
#define PM7 (*(volatile union un_pm7 *)0xFFF27).pm7
#define PM7_bit (*(volatile union un_pm7 *)0xFFF27).BIT
#define PM12 (*(volatile union un_pm12 *)0xFFF2C).pm12
#define PM12_bit (*(volatile union un_pm12 *)0xFFF2C).BIT
#define PM14 (*(volatile union un_pm14 *)0xFFF2E).pm14
#define PM14_bit (*(volatile union un_pm14 *)0xFFF2E).BIT
#define ADM0 (*(volatile union un_adm0 *)0xFFF30).adm0
#define ADM0_bit (*(volatile union un_adm0 *)0xFFF30).BIT
#define ADS (*(volatile union un_ads *)0xFFF31).ads
#define ADS_bit (*(volatile union un_ads *)0xFFF31).BIT
#define ADM1 (*(volatile union un_adm1 *)0xFFF32).adm1
#define ADM1_bit (*(volatile union un_adm1 *)0xFFF32).BIT
#define KRCTL (*(volatile union un_krctl *)0xFFF34).krctl
#define KRCTL_bit (*(volatile union un_krctl *)0xFFF34).BIT
#define KRF (*(volatile unsigned char *)0xFFF35)
#define KRM0 (*(volatile union un_krm0 *)0xFFF37).krm0
#define KRM0_bit (*(volatile union un_krm0 *)0xFFF37).BIT
#define EGP0 (*(volatile union un_egp0 *)0xFFF38).egp0
#define EGP0_bit (*(volatile union un_egp0 *)0xFFF38).BIT
#define EGN0 (*(volatile union un_egn0 *)0xFFF39).egn0
#define EGN0_bit (*(volatile union un_egn0 *)0xFFF39).BIT
#define EGP1 (*(volatile union un_egp1 *)0xFFF3A).egp1
#define EGP1_bit (*(volatile union un_egp1 *)0xFFF3A).BIT
#define EGN1 (*(volatile union un_egn1 *)0xFFF3B).egn1
#define EGN1_bit (*(volatile union un_egn1 *)0xFFF3B).BIT
#define SDR02 (*(volatile unsigned short *)0xFFF44)
#define TXD1 (*(volatile unsigned char *)0xFFF44)
#define SDR03 (*(volatile unsigned short *)0xFFF46)
#define RXD1 (*(volatile unsigned char *)0xFFF46)
#define SIO11 (*(volatile unsigned char *)0xFFF46)
#define SDR10 (*(volatile unsigned short *)0xFFF48)
#define TXD2 (*(volatile unsigned char *)0xFFF48)
#define SIO20 (*(volatile unsigned char *)0xFFF48)
#define SDR11 (*(volatile unsigned short *)0xFFF4A)
#define RXD2 (*(volatile unsigned char *)0xFFF4A)
#define SIO21 (*(volatile unsigned char *)0xFFF4A)
#define IICA0 (*(volatile unsigned char *)0xFFF50)
#define IICS0 (*(volatile union un_iics0 *)0xFFF51).iics0
#define IICS0_bit (*(volatile union un_iics0 *)0xFFF51).BIT
#define IICF0 (*(volatile union un_iicf0 *)0xFFF52).iicf0
#define IICF0_bit (*(volatile union un_iicf0 *)0xFFF52).BIT
#define TDR02 (*(volatile unsigned short *)0xFFF64)
#define TDR03 (*(volatile unsigned short *)0xFFF66)
#define TDR03L (*(volatile unsigned char *)0xFFF66)
#define TDR03H (*(volatile unsigned char *)0xFFF67)
#define TDR04 (*(volatile unsigned short *)0xFFF68)
#define TDR05 (*(volatile unsigned short *)0xFFF6A)
#define TDR06 (*(volatile unsigned short *)0xFFF6C)
#define TDR07 (*(volatile unsigned short *)0xFFF6E)
#define CMC (*(volatile unsigned char *)0xFFFA0)
#define CSC (*(volatile union un_csc *)0xFFFA1).csc
#define CSC_bit (*(volatile union un_csc *)0xFFFA1).BIT
#define OSTC (*(volatile union un_ostc *)0xFFFA2).ostc
#define OSTC_bit (*(volatile union un_ostc *)0xFFFA2).BIT
#define OSTS (*(volatile unsigned char *)0xFFFA3)
#define CKC (*(volatile union un_ckc *)0xFFFA4).ckc
#define CKC_bit (*(volatile union un_ckc *)0xFFFA4).BIT
#define CKS0 (*(volatile union un_cks0 *)0xFFFA5).cks0
#define CKS0_bit (*(volatile union un_cks0 *)0xFFFA5).BIT
#define CKS1 (*(volatile union un_cks1 *)0xFFFA6).cks1
#define CKS1_bit (*(volatile union un_cks1 *)0xFFFA6).BIT
#define CKSEL (*(volatile union un_cksel *)0xFFFA7).cksel
#define CKSEL_bit (*(volatile union un_cksel *)0xFFFA7).BIT
#define RESF (*(volatile unsigned char *)0xFFFA8)
#define LVIM (*(volatile union un_lvim *)0xFFFA9).lvim
#define LVIM_bit (*(volatile union un_lvim *)0xFFFA9).BIT
#define LVIS (*(volatile union un_lvis *)0xFFFAA).lvis
#define LVIS_bit (*(volatile union un_lvis *)0xFFFAA).BIT
#define WDTE (*(volatile unsigned char *)0xFFFAB)
#define CRCIN (*(volatile unsigned char *)0xFFFAC)
#define IF2 (*(volatile union un_if2 *)0xFFFD0).if2
#define IF2_bit (*(volatile union un_if2 *)0xFFFD0).BIT
#define IF2L (*(volatile union un_if2l *)0xFFFD0).if2l
#define IF2L_bit (*(volatile union un_if2l *)0xFFFD0).BIT
#define IF2H (*(volatile union un_if2h *)0xFFFD1).if2h
#define IF2H_bit (*(volatile union un_if2h *)0xFFFD1).BIT
#define IF3 (*(volatile union un_if3 *)0xFFFD2).if3
#define IF3_bit (*(volatile union un_if3 *)0xFFFD2).BIT
#define IF3L (*(volatile union un_if3l *)0xFFFD2).if3l
#define IF3L_bit (*(volatile union un_if3l *)0xFFFD2).BIT
#define MK2 (*(volatile union un_mk2 *)0xFFFD4).mk2
#define MK2_bit (*(volatile union un_mk2 *)0xFFFD4).BIT
#define MK2L (*(volatile union un_mk2l *)0xFFFD4).mk2l
#define MK2L_bit (*(volatile union un_mk2l *)0xFFFD4).BIT
#define MK2H (*(volatile union un_mk2h *)0xFFFD5).mk2h
#define MK2H_bit (*(volatile union un_mk2h *)0xFFFD5).BIT
#define MK3 (*(volatile union un_mk3 *)0xFFFD6).mk3
#define MK3_bit (*(volatile union un_mk3 *)0xFFFD6).BIT
#define MK3L (*(volatile union un_mk3l *)0xFFFD6).mk3l
#define MK3L_bit (*(volatile union un_mk3l *)0xFFFD6).BIT
#define PR02 (*(volatile union un_pr02 *)0xFFFD8).pr02
#define PR02_bit (*(volatile union un_pr02 *)0xFFFD8).BIT
#define PR02L (*(volatile union un_pr02l *)0xFFFD8).pr02l
#define PR02L_bit (*(volatile union un_pr02l *)0xFFFD8).BIT
#define PR02H (*(volatile union un_pr02h *)0xFFFD9).pr02h
#define PR02H_bit (*(volatile union un_pr02h *)0xFFFD9).BIT
#define PR03 (*(volatile union un_pr03 *)0xFFFDA).pr03
#define PR03_bit (*(volatile union un_pr03 *)0xFFFDA).BIT
#define PR03L (*(volatile union un_pr03l *)0xFFFDA).pr03l
#define PR03L_bit (*(volatile union un_pr03l *)0xFFFDA).BIT
#define PR12 (*(volatile union un_pr12 *)0xFFFDC).pr12
#define PR12_bit (*(volatile union un_pr12 *)0xFFFDC).BIT
#define PR12L (*(volatile union un_pr12l *)0xFFFDC).pr12l
#define PR12L_bit (*(volatile union un_pr12l *)0xFFFDC).BIT
#define PR12H (*(volatile union un_pr12h *)0xFFFDD).pr12h
#define PR12H_bit (*(volatile union un_pr12h *)0xFFFDD).BIT
#define PR13 (*(volatile union un_pr13 *)0xFFFDE).pr13
#define PR13_bit (*(volatile union un_pr13 *)0xFFFDE).BIT
#define PR13L (*(volatile union un_pr13l *)0xFFFDE).pr13l
#define PR13L_bit (*(volatile union un_pr13l *)0xFFFDE).BIT
#define IF0 (*(volatile union un_if0 *)0xFFFE0).if0
#define IF0_bit (*(volatile union un_if0 *)0xFFFE0).BIT
#define IF0L (*(volatile union un_if0l *)0xFFFE0).if0l
#define IF0L_bit (*(volatile union un_if0l *)0xFFFE0).BIT
#define IF0H (*(volatile union un_if0h *)0xFFFE1).if0h
#define IF0H_bit (*(volatile union un_if0h *)0xFFFE1).BIT
#define IF1 (*(volatile union un_if1 *)0xFFFE2).if1
#define IF1_bit (*(volatile union un_if1 *)0xFFFE2).BIT
#define IF1L (*(volatile union un_if1l *)0xFFFE2).if1l
#define IF1L_bit (*(volatile union un_if1l *)0xFFFE2).BIT
#define IF1H (*(volatile union un_if1h *)0xFFFE3).if1h
#define IF1H_bit (*(volatile union un_if1h *)0xFFFE3).BIT
#define MK0 (*(volatile union un_mk0 *)0xFFFE4).mk0
#define MK0_bit (*(volatile union un_mk0 *)0xFFFE4).BIT
#define MK0L (*(volatile union un_mk0l *)0xFFFE4).mk0l
#define MK0L_bit (*(volatile union un_mk0l *)0xFFFE4).BIT
#define MK0H (*(volatile union un_mk0h *)0xFFFE5).mk0h
#define MK0H_bit (*(volatile union un_mk0h *)0xFFFE5).BIT
#define MK1 (*(volatile union un_mk1 *)0xFFFE6).mk1
#define MK1_bit (*(volatile union un_mk1 *)0xFFFE6).BIT
#define MK1L (*(volatile union un_mk1l *)0xFFFE6).mk1l
#define MK1L_bit (*(volatile union un_mk1l *)0xFFFE6).BIT
#define MK1H (*(volatile union un_mk1h *)0xFFFE7).mk1h
#define MK1H_bit (*(volatile union un_mk1h *)0xFFFE7).BIT
#define PR00 (*(volatile union un_pr00 *)0xFFFE8).pr00
#define PR00_bit (*(volatile union un_pr00 *)0xFFFE8).BIT
#define PR00L (*(volatile union un_pr00l *)0xFFFE8).pr00l
#define PR00L_bit (*(volatile union un_pr00l *)0xFFFE8).BIT
#define PR00H (*(volatile union un_pr00h *)0xFFFE9).pr00h
#define PR00H_bit (*(volatile union un_pr00h *)0xFFFE9).BIT
#define PR01 (*(volatile union un_pr01 *)0xFFFEA).pr01
#define PR01_bit (*(volatile union un_pr01 *)0xFFFEA).BIT
#define PR01L (*(volatile union un_pr01l *)0xFFFEA).pr01l
#define PR01L_bit (*(volatile union un_pr01l *)0xFFFEA).BIT
#define PR01H (*(volatile union un_pr01h *)0xFFFEB).pr01h
#define PR01H_bit (*(volatile union un_pr01h *)0xFFFEB).BIT
#define PR10 (*(volatile union un_pr10 *)0xFFFEC).pr10
#define PR10_bit (*(volatile union un_pr10 *)0xFFFEC).BIT
#define PR10L (*(volatile union un_pr10l *)0xFFFEC).pr10l
#define PR10L_bit (*(volatile union un_pr10l *)0xFFFEC).BIT
#define PR10H (*(volatile union un_pr10h *)0xFFFED).pr10h
#define PR10H_bit (*(volatile union un_pr10h *)0xFFFED).BIT
#define PR11 (*(volatile union un_pr11 *)0xFFFEE).pr11
#define PR11_bit (*(volatile union un_pr11 *)0xFFFEE).BIT
#define PR11L (*(volatile union un_pr11l *)0xFFFEE).pr11l
#define PR11L_bit (*(volatile union un_pr11l *)0xFFFEE).BIT
#define PR11H (*(volatile union un_pr11h *)0xFFFEF).pr11h
#define PR11H_bit (*(volatile union un_pr11h *)0xFFFEF).BIT
#define MACRL (*(volatile unsigned short *)0xFFFF0)
#define MACRH (*(volatile unsigned short *)0xFFFF2)
#define PMC (*(volatile union un_pmc *)0xFFFFE).pmc
#define PMC_bit (*(volatile union un_pmc *)0xFFFFE).BIT

/*
 Sfr bits
 */
#define ADCE ADM0_bit.no0
#define ADCS ADM0_bit.no7
#define KREG KRCTL_bit.no0
#define KRMD KRCTL_bit.no7
#define SPD0 IICS0_bit.no0
#define STD0 IICS0_bit.no1
#define ACKD0 IICS0_bit.no2
#define TRC0 IICS0_bit.no3
#define COI0 IICS0_bit.no4
#define EXC0 IICS0_bit.no5
#define ALD0 IICS0_bit.no6
#define MSTS0 IICS0_bit.no7
#define IICRSV0 IICF0_bit.no0
#define STCEN0 IICF0_bit.no1
#define IICBSY0 IICF0_bit.no6
#define STCF0 IICF0_bit.no7
#define HIOSTOP CSC_bit.no0
#define MIOEN CSC_bit.no1
#define XTSTOP CSC_bit.no6
#define MSTOP CSC_bit.no7
#define MCM1 CKC_bit.no0
#define MCS1 CKC_bit.no1
#define MCM0 CKC_bit.no4
#define MCS CKC_bit.no5
#define CSS CKC_bit.no6
#define CLS CKC_bit.no7
#define PCLOE0 CKS0_bit.no7
#define PCLOE1 CKS1_bit.no7
#define SELLOSC CKSEL_bit.no0
#define LVD0F LVIM_bit.no0
#define LVD1F LVIM_bit.no1
#define DLVD0F LVIM_bit.no2
#define DLVD1F LVIM_bit.no3
#define LVISEN LVIM_bit.no7
#define LVD1SEL LVIS_bit.no6
#define LVD1EN LVIS_bit.no7
#define TMIF05 IF2_bit.no0
#define TMIF06 IF2_bit.no1
#define TMIF07 IF2_bit.no2
#define PIF6 IF2_bit.no3
#define PIF8 IF2_bit.no5
#define PIF9 IF2_bit.no6
#define FLIF IF2_bit.no7
#define UREIF0 IF2H_bit.no2
#define CTSUWRIF IF2H_bit.no6
#define CTSURDIF IF3_bit.no0
#define CTSUFNIF IF3_bit.no1
#define UTIF0 IF3_bit.no3
#define URIF0 IF3_bit.no4
#define TMMK05 MK2_bit.no0
#define TMMK06 MK2_bit.no1
#define TMMK07 MK2_bit.no2
#define PMK6 MK2_bit.no3
#define PMK8 MK2_bit.no5
#define PMK9 MK2_bit.no6
#define FLMK MK2_bit.no7
#define UREMK0 MK2H_bit.no2
#define CTSUWRMK MK2H_bit.no6
#define CTSURDMK MK3_bit.no0
#define CTSUFNMK MK3_bit.no1
#define UTMK0 MK3_bit.no3
#define URMK0 MK3_bit.no4
#define TMPR005 PR02_bit.no0
#define TMPR006 PR02_bit.no1
#define TMPR007 PR02_bit.no2
#define PPR06 PR02_bit.no3
#define PPR08 PR02_bit.no5
#define PPR09 PR02_bit.no6
#define FLPR0 PR02_bit.no7
#define UREPR00 PR02H_bit.no2
#define CTSUWRPR0 PR02H_bit.no6
#define CTSURDPR0 PR03_bit.no0
#define CTSUFNPR0 PR03_bit.no1
#define UTPR00 PR03_bit.no3
#define URPR00 PR03_bit.no4
#define TMPR105 PR12_bit.no0
#define TMPR106 PR12_bit.no1
#define TMPR107 PR12_bit.no2
#define PPR16 PR12_bit.no3
#define PPR18 PR12_bit.no5
#define PPR19 PR12_bit.no6
#define FLPR1 PR12_bit.no7
#define UREPR10 PR12H_bit.no2
#define CTSUWRPR1 PR12H_bit.no6
#define CTSURDPR1 PR13_bit.no0
#define CTSUFNPR1 PR13_bit.no1
#define UTPR10 PR13_bit.no3
#define URPR10 PR13_bit.no4
#define WDTIIF IF0_bit.no0
#define LVIIF IF0_bit.no1
#define PIF0 IF0_bit.no2
#define PIF1 IF0_bit.no3
#define PIF2 IF0_bit.no4
#define PIF3 IF0_bit.no5
#define PIF4 IF0_bit.no6
#define PIF5 IF0_bit.no7
#define STIF2 IF0H_bit.no0
#define CSIIF20 IF0H_bit.no0
#define IICIF20 IF0H_bit.no0
#define CSIIF21 IF0H_bit.no1
#define SRIF2 IF0H_bit.no1
#define IICIF21 IF0H_bit.no1
#define SREIF2 IF0H_bit.no2
#define SMSEIF IF0H_bit.no4
#define STIF0 IF0H_bit.no5
#define CSIIF00 IF0H_bit.no5
#define IICIF00 IF0H_bit.no5
#define TMIF00 IF0H_bit.no6
#define SREIF0 IF0H_bit.no7
#define TMIF01H IF0H_bit.no7
#define STIF1 IF1_bit.no0
#define IICIF11 IF1_bit.no1
#define CSIIF11 IF1_bit.no1
#define SRIF1 IF1_bit.no1
#define SREIF1 IF1_bit.no2
#define TMIF03H IF1_bit.no2
#define IICAIF0 IF1_bit.no3
#define CSIIF01 IF1_bit.no4
#define IICIF01 IF1_bit.no4
#define SRIF0 IF1_bit.no4
#define TMIF01 IF1_bit.no5
#define TMIF02 IF1_bit.no6
#define TMIF03 IF1_bit.no7
#define ADIF IF1H_bit.no0
#define RTCIF IF1H_bit.no1
#define ITLIF IF1H_bit.no2
#define KRIF IF1H_bit.no3
#define TMIF04 IF1H_bit.no7
#define WDTIMK MK0_bit.no0
#define LVIMK MK0_bit.no1
#define PMK0 MK0_bit.no2
#define PMK1 MK0_bit.no3
#define PMK2 MK0_bit.no4
#define PMK3 MK0_bit.no5
#define PMK4 MK0_bit.no6
#define PMK5 MK0_bit.no7
#define STMK2 MK0H_bit.no0
#define CSIMK20 MK0H_bit.no0
#define IICMK20 MK0H_bit.no0
#define CSIMK21 MK0H_bit.no1
#define SRMK2 MK0H_bit.no1
#define IICMK21 MK0H_bit.no1
#define SREMK2 MK0H_bit.no2
#define SMSEMK MK0H_bit.no4
#define STMK0 MK0H_bit.no5
#define IICMK00 MK0H_bit.no5
#define CSIMK00 MK0H_bit.no5
#define TMMK00 MK0H_bit.no6
#define SREMK0 MK0H_bit.no7
#define TMMK01H MK0H_bit.no7
#define STMK1 MK1_bit.no0
#define IICMK11 MK1_bit.no1
#define CSIMK11 MK1_bit.no1
#define SRMK1 MK1_bit.no1
#define TMMK03H MK1_bit.no2
#define SREMK1 MK1_bit.no2
#define IICAMK0 MK1_bit.no3
#define IICMK01 MK1_bit.no4
#define SRMK0 MK1_bit.no4
#define CSIMK01 MK1_bit.no4
#define TMMK01 MK1_bit.no5
#define TMMK02 MK1_bit.no6
#define TMMK03 MK1_bit.no7
#define ADMK MK1H_bit.no0
#define RTCMK MK1H_bit.no1
#define ITLMK MK1H_bit.no2
#define KRMK MK1H_bit.no3
#define TMMK04 MK1H_bit.no7
#define WDTIPR0 PR00_bit.no0
#define LVIPR0 PR00_bit.no1
#define PPR00 PR00_bit.no2
#define PPR01 PR00_bit.no3
#define PPR02 PR00_bit.no4
#define PPR03 PR00_bit.no5
#define PPR04 PR00_bit.no6
#define PPR05 PR00_bit.no7
#define STPR02 PR00H_bit.no0
#define CSIPR020 PR00H_bit.no0
#define IICPR020 PR00H_bit.no0
#define CSIPR021 PR00H_bit.no1
#define SRPR02 PR00H_bit.no1
#define IICPR021 PR00H_bit.no1
#define SREPR02 PR00H_bit.no2
#define SMSEPR0 PR00H_bit.no4
#define STPR00 PR00H_bit.no5
#define CSIPR000 PR00H_bit.no5
#define IICPR000 PR00H_bit.no5
#define TMPR000 PR00H_bit.no6
#define SREPR00 PR00H_bit.no7
#define TMPR001H PR00H_bit.no7
#define STPR01 PR01_bit.no0
#define SRPR01 PR01_bit.no1
#define CSIPR011 PR01_bit.no1
#define IICPR011 PR01_bit.no1
#define SREPR01 PR01_bit.no2
#define TMPR003H PR01_bit.no2
#define IICAPR00 PR01_bit.no3
#define CSIPR001 PR01_bit.no4
#define SRPR00 PR01_bit.no4
#define IICPR001 PR01_bit.no4
#define TMPR001 PR01_bit.no5
#define TMPR002 PR01_bit.no6
#define TMPR003 PR01_bit.no7
#define ADPR0 PR01H_bit.no0
#define RTCPR0 PR01H_bit.no1
#define ITLPR0 PR01H_bit.no2
#define KRPR0 PR01H_bit.no3
#define TMPR004 PR01H_bit.no7
#define WDTIPR1 PR10_bit.no0
#define LVIPR1 PR10_bit.no1
#define PPR10 PR10_bit.no2
#define PPR11 PR10_bit.no3
#define PPR12 PR10_bit.no4
#define PPR13 PR10_bit.no5
#define PPR14 PR10_bit.no6
#define PPR15 PR10_bit.no7
#define STPR12 PR10H_bit.no0
#define IICPR120 PR10H_bit.no0
#define CSIPR120 PR10H_bit.no0
#define SRPR12 PR10H_bit.no1
#define IICPR121 PR10H_bit.no1
#define CSIPR121 PR10H_bit.no1
#define SREPR12 PR10H_bit.no2
#define SMSEPR1 PR10H_bit.no4
#define STPR10 PR10H_bit.no5
#define CSIPR100 PR10H_bit.no5
#define IICPR100 PR10H_bit.no5
#define TMPR100 PR10H_bit.no6
#define TMPR101H PR10H_bit.no7
#define SREPR10 PR10H_bit.no7
#define STPR11 PR11_bit.no0
#define SRPR11 PR11_bit.no1
#define IICPR111 PR11_bit.no1
#define CSIPR111 PR11_bit.no1
#define TMPR103H PR11_bit.no2
#define SREPR11 PR11_bit.no2
#define IICAPR10 PR11_bit.no3
#define IICPR101 PR11_bit.no4
#define CSIPR101 PR11_bit.no4
#define SRPR10 PR11_bit.no4
#define TMPR101 PR11_bit.no5
#define TMPR102 PR11_bit.no6
#define TMPR103 PR11_bit.no7
#define ADPR1 PR11H_bit.no0
#define RTCPR1 PR11H_bit.no1
#define ITLPR1 PR11H_bit.no2
#define KRPR1 PR11H_bit.no3
#define TMPR104 PR11H_bit.no7
#define MAA PMC_bit.no0

/*
 Interrupt vector addresses
 */
#define RST_vect 0x0
#define INTDBG_vect 0x2
#define INTWDTI_vect 0x4
#define INTLVI_vect 0x6
#define INTP0_vect 0x8
#define INTP1_vect 0xA
#define INTP2_vect 0xC
#define INTP3_vect 0xE
#define INTP4_vect 0x10
#define INTP5_vect 0x12
#define INTCSI20_vect 0x14
#define INTIIC20_vect 0x14
#define INTST2_vect 0x14
#define INTCSI21_vect 0x16
#define INTIIC21_vect 0x16
#define INTSR2_vect 0x16
#define INTSRE2_vect 0x18
#define INTSMSE_vect 0x1C
#define INTCSI00_vect 0x1E
#define INTIIC00_vect 0x1E
#define INTST0_vect 0x1E
#define INTTM00_vect 0x20
#define INTSRE0_vect 0x22
#define INTTM01H_vect 0x22
#define INTST1_vect 0x24
#define INTCSI11_vect 0x26
#define INTIIC11_vect 0x26
#define INTSR1_vect 0x26
#define INTSRE1_vect 0x28
#define INTTM03H_vect 0x28
#define INTIICA0_vect 0x2A
#define INTCSI01_vect 0x2C
#define INTIIC01_vect 0x2C
#define INTSR0_vect 0x2C
#define INTTM01_vect 0x2E
#define INTTM02_vect 0x30
#define INTTM03_vect 0x32
#define INTAD_vect 0x34
#define INTRTC_vect 0x36
#define INTITL_vect 0x38
#define INTKR_vect 0x3A
#define INTTM04_vect 0x42
#define INTTM05_vect 0x44
#define INTTM06_vect 0x46
#define INTTM07_vect 0x48
#define INTP6_vect 0x4A
#define INTP8_vect 0x4E
#define INTP9_vect 0x50
#define INTFL_vect 0x52
#define INTURE0_vect 0x58
#define INTCTSUWR_vect 0x60
#define INTCTSURD_vect 0x64
#define INTCTSUFN_vect 0x66
#define INTUT0_vect 0x6A
#define INTUR0_vect 0x6C
#define BRK_I_vect 0x7E
#endif
