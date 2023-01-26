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

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu14 {
	unsigned char pu14;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim4 {
	unsigned char pim4;
	__BITS8 BIT;
};
union un_pim7 {
	unsigned char pim7;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
	__BITS8 BIT;
};
union un_pom7 {
	unsigned char pom7;
	__BITS8 BIT;
};
union un_pom12 {
	unsigned char pom12;
	__BITS8 BIT;
};
union un_pmca0 {
	unsigned char pmca0;
	__BITS8 BIT;
};
union un_pmca2 {
	unsigned char pmca2;
	__BITS8 BIT;
};
union un_pmca12 {
	unsigned char pmca12;
	__BITS8 BIT;
};
union un_pmca14 {
	unsigned char pmca14;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_ulbs {
	unsigned char ulbs;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_flmode {
	unsigned char flmode;
	__BITS8 BIT;
};
union un_flmwrp {
	unsigned char flmwrp;
	__BITS8 BIT;
};
union un_fsse {
	unsigned char fsse;
	__BITS8 BIT;
};
union un_pfs {
	unsigned char pfs;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_prr0 {
	unsigned char prr0;
	__BITS8 BIT;
};
union un_osmc {
	unsigned char osmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_porsr {
	unsigned char porsr;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_prr1 {
	unsigned char prr1;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_wkupmd {
	unsigned char wkupmd;
	__BITS8 BIT;
};
union un_lvdfclr {
	unsigned char lvdfclr;
	__BITS8 BIT;
};
union un_rtcc0 {
	unsigned char rtcc0;
	__BITS8 BIT;
};
union un_rtcc1 {
	unsigned char rtcc1;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_pmct0 {
	unsigned char pmct0;
	__BITS8 BIT;
};
union un_pmct1 {
	unsigned char pmct1;
	__BITS8 BIT;
};
union un_pmct2 {
	unsigned char pmct2;
	__BITS8 BIT;
};
union un_pmct3 {
	unsigned char pmct3;
	__BITS8 BIT;
};
union un_pmct5 {
	unsigned char pmct5;
	__BITS8 BIT;
};
union un_pmct7 {
	unsigned char pmct7;
	__BITS8 BIT;
};
union un_pmct13 {
	unsigned char pmct13;
	__BITS8 BIT;
};
union un_pmct14 {
	unsigned char pmct14;
	__BITS8 BIT;
};
union un_pfoe1 {
	unsigned char pfoe1;
	__BITS8 BIT;
};
union un_pdidis0 {
	unsigned char pdidis0;
	__BITS8 BIT;
};
union un_pdidis1 {
	unsigned char pdidis1;
	__BITS8 BIT;
};
union un_pdidis5 {
	unsigned char pdidis5;
	__BITS8 BIT;
};
union un_pdidis7 {
	unsigned char pdidis7;
	__BITS8 BIT;
};
union un_pdidis12 {
	unsigned char pdidis12;
	__BITS8 BIT;
};
union un_pdidis13 {
	unsigned char pdidis13;
	__BITS8 BIT;
};
union un_flars {
	unsigned char flars;
	__BITS8 BIT;
};
union un_fssq {
	unsigned char fssq;
	__BITS8 BIT;
};
union un_flrst {
	unsigned char flrst;
	__BITS8 BIT;
};
union un_fsastl {
	unsigned char fsastl;
	__BITS8 BIT;
};
union un_fsasth {
	unsigned char fsasth;
	__BITS8 BIT;
};
union un_dtcen0 {
	unsigned char dtcen0;
	__BITS8 BIT;
};
union un_dtcen1 {
	unsigned char dtcen1;
	__BITS8 BIT;
};
union un_dtcen2 {
	unsigned char dtcen2;
	__BITS8 BIT;
};
union un_dtcen3 {
	unsigned char dtcen3;
	__BITS8 BIT;
};
union un_dtcen4 {
	unsigned char dtcen4;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_asima00 {
	unsigned char asima00;
	__BITS8 BIT;
};
union un_asima01 {
	unsigned char asima01;
	__BITS8 BIT;
};
union un_ascta0 {
	unsigned char ascta0;
	__BITS8 BIT;
};
union un_uta0ck {
	unsigned char uta0ck;
	__BITS8 BIT;
};
union un_itlctl0 {
	unsigned char itlctl0;
	__BITS8 BIT;
};
union un_itlcc0 {
	unsigned char itlcc0;
	__BITS8 BIT;
};
union un_smsc {
	unsigned char smsc;
	__BITS8 BIT;
};
union un_smss {
	unsigned char smss;
	__BITS8 BIT;
};
union un_trngscr0 {
	unsigned char trngscr0;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM4 (*(volatile union un_pim4 *)0xF0044).pim4
#define PIM4_bit (*(volatile union un_pim4 *)0xF0044).BIT
#define PIM7 (*(volatile union un_pim7 *)0xF0047).pim7
#define PIM7_bit (*(volatile union un_pim7 *)0xF0047).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define POM12 (*(volatile union un_pom12 *)0xF005C).pom12
#define POM12_bit (*(volatile union un_pom12 *)0xF005C).BIT
#define PMCA0 (*(volatile union un_pmca0 *)0xF0060).pmca0
#define PMCA0_bit (*(volatile union un_pmca0 *)0xF0060).BIT
#define PMCA2 (*(volatile union un_pmca2 *)0xF0062).pmca2
#define PMCA2_bit (*(volatile union un_pmca2 *)0xF0062).BIT
#define PMCA12 (*(volatile union un_pmca12 *)0xF006C).pmca12
#define PMCA12_bit (*(volatile union un_pmca12 *)0xF006C).BIT
#define PMCA14 (*(volatile union un_pmca14 *)0xF006E).pmca14
#define PMCA14_bit (*(volatile union un_pmca14 *)0xF006E).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define TIS1 (*(volatile unsigned char *)0xF0075)
#define PIOR (*(volatile unsigned char *)0xF0077)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define ULBS (*(volatile union un_ulbs *)0xF0079).ulbs
#define ULBS_bit (*(volatile union un_ulbs *)0xF0079).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define FLMODE (*(volatile union un_flmode *)0xF00AA).flmode
#define FLMODE_bit (*(volatile union un_flmode *)0xF00AA).BIT
#define FLMWRP (*(volatile union un_flmwrp *)0xF00AB).flmwrp
#define FLMWRP_bit (*(volatile union un_flmwrp *)0xF00AB).BIT
#define FLSEC (*(volatile unsigned short *)0xF00B0)
#define FLFSWS (*(volatile unsigned short *)0xF00B2)
#define FLFSWE (*(volatile unsigned short *)0xF00B4)
#define FSSET (*(volatile unsigned char *)0xF00B6)
#define FSSE (*(volatile union un_fsse *)0xF00B7).fsse
#define FSSE_bit (*(volatile union un_fsse *)0xF00B7).BIT
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define PRR0 (*(volatile union un_prr0 *)0xF00F1).prr0
#define PRR0_bit (*(volatile union un_prr0 *)0xF00F1).BIT
#define MOCODIV (*(volatile unsigned char *)0xF00F2)
#define OSMC (*(volatile union un_osmc *)0xF00F3).osmc
#define OSMC_bit (*(volatile union un_osmc *)0xF00F3).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define PORSR (*(volatile union un_porsr *)0xF00F9).porsr
#define PORSR_bit (*(volatile union un_porsr *)0xF00F9).BIT
#define PER1 (*(volatile union un_per1 *)0xF00FA).per1
#define PER1_bit (*(volatile union un_per1 *)0xF00FA).BIT
#define PRR1 (*(volatile union un_prr1 *)0xF00FB).prr1
#define PRR1_bit (*(volatile union un_prr1 *)0xF00FB).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char *)0xF00FF)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SSR02 (*(volatile unsigned short *)0xF0104)
#define SSR02L (*(volatile unsigned char *)0xF0104)
#define SSR03 (*(volatile unsigned short *)0xF0106)
#define SSR03L (*(volatile unsigned char *)0xF0106)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SIR02 (*(volatile unsigned short *)0xF010C)
#define SIR02L (*(volatile unsigned char *)0xF010C)
#define SIR03 (*(volatile unsigned short *)0xF010E)
#define SIR03L (*(volatile unsigned char *)0xF010E)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SMR02 (*(volatile unsigned short *)0xF0114)
#define SMR03 (*(volatile unsigned short *)0xF0116)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SCR02 (*(volatile unsigned short *)0xF011C)
#define SCR03 (*(volatile unsigned short *)0xF011E)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SIR10 (*(volatile unsigned short *)0xF0148)
#define SIR10L (*(volatile unsigned char *)0xF0148)
#define SIR11 (*(volatile unsigned short *)0xF014A)
#define SIR11L (*(volatile unsigned char *)0xF014A)
#define SMR10 (*(volatile unsigned short *)0xF0150)
#define SMR11 (*(volatile unsigned short *)0xF0152)
#define SCR10 (*(volatile unsigned short *)0xF0158)
#define SCR11 (*(volatile unsigned short *)0xF015A)
#define SE1 (*(volatile unsigned short *)0xF0160)
#define SE1L (*(volatile union un_se1l *)0xF0160).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0160).BIT
#define SS1 (*(volatile unsigned short *)0xF0162)
#define SS1L (*(volatile union un_ss1l *)0xF0162).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0162).BIT
#define ST1 (*(volatile unsigned short *)0xF0164)
#define ST1L (*(volatile union un_st1l *)0xF0164).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0164).BIT
#define SPS1 (*(volatile unsigned short *)0xF0166)
#define SPS1L (*(volatile unsigned char *)0xF0166)
#define SO1 (*(volatile unsigned short *)0xF0168)
#define SOE1 (*(volatile unsigned short *)0xF016A)
#define SOE1L (*(volatile union un_soe1l *)0xF016A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF016A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0174)
#define SOL1L (*(volatile unsigned char *)0xF0174)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TCR04 (*(volatile unsigned short *)0xF0188)
#define TCR05 (*(volatile unsigned short *)0xF018A)
#define TCR06 (*(volatile unsigned short *)0xF018C)
#define TCR07 (*(volatile unsigned short *)0xF018E)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TMR04 (*(volatile unsigned short *)0xF0198)
#define TMR05 (*(volatile unsigned short *)0xF019A)
#define TMR06 (*(volatile unsigned short *)0xF019C)
#define TMR07 (*(volatile unsigned short *)0xF019E)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TSR04 (*(volatile unsigned short *)0xF01A8)
#define TSR04L (*(volatile unsigned char *)0xF01A8)
#define TSR05 (*(volatile unsigned short *)0xF01AA)
#define TSR05L (*(volatile unsigned char *)0xF01AA)
#define TSR06 (*(volatile unsigned short *)0xF01AC)
#define TSR06L (*(volatile unsigned char *)0xF01AC)
#define TSR07 (*(volatile unsigned short *)0xF01AE)
#define TSR07L (*(volatile unsigned char *)0xF01AE)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define MIOTRM (*(volatile unsigned char *)0xF0212)
#define LIOTRM (*(volatile unsigned char *)0xF0213)
#define MOSCDIV (*(volatile unsigned char *)0xF0214)
#define WKUPMD (*(volatile union un_wkupmd *)0xF0215).wkupmd
#define WKUPMD_bit (*(volatile union un_wkupmd *)0xF0215).BIT
#define LVDFCLR (*(volatile union un_lvdfclr *)0xF0218).lvdfclr
#define LVDFCLR_bit (*(volatile union un_lvdfclr *)0xF0218).BIT
#define SEC (*(volatile unsigned char *)0xF0220)
#define MIN (*(volatile unsigned char *)0xF0221)
#define HOUR (*(volatile unsigned char *)0xF0222)
#define WEEK (*(volatile unsigned char *)0xF0223)
#define DAY (*(volatile unsigned char *)0xF0224)
#define MONTH (*(volatile unsigned char *)0xF0225)
#define YEAR (*(volatile unsigned char *)0xF0226)
#define SUBCUD (*(volatile unsigned char *)0xF0227)
#define ALARMWM (*(volatile unsigned char *)0xF0228)
#define ALARMWH (*(volatile unsigned char *)0xF0229)
#define ALARMWW (*(volatile unsigned char *)0xF022A)
#define RTCC0 (*(volatile union un_rtcc0 *)0xF022B).rtcc0
#define RTCC0_bit (*(volatile union un_rtcc0 *)0xF022B).BIT
#define RTCC1 (*(volatile union un_rtcc1 *)0xF022C).rtcc1
#define RTCC1_bit (*(volatile union un_rtcc1 *)0xF022C).BIT
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define ELSELR00 (*(volatile unsigned char *)0xF0240)
#define ELSELR01 (*(volatile unsigned char *)0xF0241)
#define ELSELR02 (*(volatile unsigned char *)0xF0242)
#define ELSELR03 (*(volatile unsigned char *)0xF0243)
#define ELSELR04 (*(volatile unsigned char *)0xF0244)
#define ELSELR05 (*(volatile unsigned char *)0xF0245)
#define ELSELR06 (*(volatile unsigned char *)0xF0246)
#define ELSELR07 (*(volatile unsigned char *)0xF0247)
#define ELSELR08 (*(volatile unsigned char *)0xF0248)
#define ELSELR10 (*(volatile unsigned char *)0xF024A)
#define ELSELR11 (*(volatile unsigned char *)0xF024B)
#define ELSELR12 (*(volatile unsigned char *)0xF024C)
#define ELSELR13 (*(volatile unsigned char *)0xF024D)
#define ELSELR14 (*(volatile unsigned char *)0xF024E)
#define ELSELR15 (*(volatile unsigned char *)0xF024F)
#define ELSELR16 (*(volatile unsigned char *)0xF0250)
#define ELSELR17 (*(volatile unsigned char *)0xF0251)
#define ELSELR18 (*(volatile unsigned char *)0xF0252)
#define ELSELR19 (*(volatile unsigned char *)0xF0253)
#define PMCT0 (*(volatile union un_pmct0 *)0xF0260).pmct0
#define PMCT0_bit (*(volatile union un_pmct0 *)0xF0260).BIT
#define PMCT1 (*(volatile union un_pmct1 *)0xF0261).pmct1
#define PMCT1_bit (*(volatile union un_pmct1 *)0xF0261).BIT
#define PMCT2 (*(volatile union un_pmct2 *)0xF0262).pmct2
#define PMCT2_bit (*(volatile union un_pmct2 *)0xF0262).BIT
#define PMCT3 (*(volatile union un_pmct3 *)0xF0263).pmct3
#define PMCT3_bit (*(volatile union un_pmct3 *)0xF0263).BIT
#define PMCT5 (*(volatile union un_pmct5 *)0xF0265).pmct5
#define PMCT5_bit (*(volatile union un_pmct5 *)0xF0265).BIT
#define PMCT7 (*(volatile union un_pmct7 *)0xF0267).pmct7
#define PMCT7_bit (*(volatile union un_pmct7 *)0xF0267).BIT
#define PMCT13 (*(volatile union un_pmct13 *)0xF026D).pmct13
#define PMCT13_bit (*(volatile union un_pmct13 *)0xF026D).BIT
#define PMCT14 (*(volatile union un_pmct14 *)0xF026E).pmct14
#define PMCT14_bit (*(volatile union un_pmct14 *)0xF026E).BIT
#define PFOE1 (*(volatile union un_pfoe1 *)0xF02AB).pfoe1
#define PFOE1_bit (*(volatile union un_pfoe1 *)0xF02AB).BIT
#define PDIDIS0 (*(volatile union un_pdidis0 *)0xF02B0).pdidis0
#define PDIDIS0_bit (*(volatile union un_pdidis0 *)0xF02B0).BIT
#define PDIDIS1 (*(volatile union un_pdidis1 *)0xF02B1).pdidis1
#define PDIDIS1_bit (*(volatile union un_pdidis1 *)0xF02B1).BIT
#define PDIDIS5 (*(volatile union un_pdidis5 *)0xF02B5).pdidis5
#define PDIDIS5_bit (*(volatile union un_pdidis5 *)0xF02B5).BIT
#define PDIDIS7 (*(volatile union un_pdidis7 *)0xF02B7).pdidis7
#define PDIDIS7_bit (*(volatile union un_pdidis7 *)0xF02B7).BIT
#define PDIDIS12 (*(volatile union un_pdidis12 *)0xF02BC).pdidis12
#define PDIDIS12_bit (*(volatile union un_pdidis12 *)0xF02BC).BIT
#define PDIDIS13 (*(volatile union un_pdidis13 *)0xF02BD).pdidis13
#define PDIDIS13_bit (*(volatile union un_pdidis13 *)0xF02BD).BIT
#define FLPMC (*(volatile unsigned char *)0xF02C0)
#define FLARS (*(volatile union un_flars *)0xF02C1).flars
#define FLARS_bit (*(volatile union un_flars *)0xF02C1).BIT
#define FLAPL (*(volatile unsigned short *)0xF02C2)
#define FLAPH (*(volatile unsigned char *)0xF02C4)
#define FSSQ (*(volatile union un_fssq *)0xF02C5).fssq
#define FSSQ_bit (*(volatile union un_fssq *)0xF02C5).BIT
#define FLSEDL (*(volatile unsigned short *)0xF02C6)
#define FLSEDH (*(volatile unsigned char *)0xF02C8)
#define FLRST (*(volatile union un_flrst *)0xF02C9).flrst
#define FLRST_bit (*(volatile union un_flrst *)0xF02C9).BIT
#define FSASTL (*(volatile union un_fsastl *)0xF02CA).fsastl
#define FSASTL_bit (*(volatile union un_fsastl *)0xF02CA).BIT
#define FSASTH (*(volatile union un_fsasth *)0xF02CB).fsasth
#define FSASTH_bit (*(volatile union un_fsasth *)0xF02CB).BIT
#define FLWL (*(volatile unsigned short *)0xF02CC)
#define FLWH (*(volatile unsigned short *)0xF02CE)
#define DTCBAR (*(volatile unsigned char *)0xF02E0)
#define DTCEN0 (*(volatile union un_dtcen0 *)0xF02E8).dtcen0
#define DTCEN0_bit (*(volatile union un_dtcen0 *)0xF02E8).BIT
#define DTCEN1 (*(volatile union un_dtcen1 *)0xF02E9).dtcen1
#define DTCEN1_bit (*(volatile union un_dtcen1 *)0xF02E9).BIT
#define DTCEN2 (*(volatile union un_dtcen2 *)0xF02EA).dtcen2
#define DTCEN2_bit (*(volatile union un_dtcen2 *)0xF02EA).BIT
#define DTCEN3 (*(volatile union un_dtcen3 *)0xF02EB).dtcen3
#define DTCEN3_bit (*(volatile union un_dtcen3 *)0xF02EB).BIT
#define DTCEN4 (*(volatile union un_dtcen4 *)0xF02EC).dtcen4
#define DTCEN4_bit (*(volatile union un_dtcen4 *)0xF02EC).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define TXBA0 (*(volatile unsigned char *)0xF0300)
#define RXBA0 (*(volatile unsigned char *)0xF0301)
#define ASIMA00 (*(volatile union un_asima00 *)0xF0302).asima00
#define ASIMA00_bit (*(volatile union un_asima00 *)0xF0302).BIT
#define ASIMA01 (*(volatile union un_asima01 *)0xF0303).asima01
#define ASIMA01_bit (*(volatile union un_asima01 *)0xF0303).BIT
#define BRGCA0 (*(volatile unsigned char *)0xF0304)
#define ASISA0 (*(volatile unsigned char *)0xF0305)
#define ASCTA0 (*(volatile union un_ascta0 *)0xF0306).ascta0
#define ASCTA0_bit (*(volatile union un_ascta0 *)0xF0306).BIT
#define UTA0CK (*(volatile union un_uta0ck *)0xF0310).uta0ck
#define UTA0CK_bit (*(volatile union un_uta0ck *)0xF0310).BIT
#define ITLCMP00 (*(volatile unsigned short *)0xF0360)
#define ITLCMP000 (*(volatile unsigned char *)0xF0360)
#define ITLCMP001 (*(volatile unsigned char *)0xF0361)
#define ITLCMP01 (*(volatile unsigned short *)0xF0362)
#define ITLCMP012 (*(volatile unsigned char *)0xF0362)
#define ITLCMP013 (*(volatile unsigned char *)0xF0363)
#define ITLCAP00 (*(volatile unsigned short *)0xF0364)
#define ITLCTL0 (*(volatile union un_itlctl0 *)0xF0366).itlctl0
#define ITLCTL0_bit (*(volatile union un_itlctl0 *)0xF0366).BIT
#define ITLCSEL0 (*(volatile unsigned char *)0xF0367)
#define ITLFDIV00 (*(volatile unsigned char *)0xF0368)
#define ITLFDIV01 (*(volatile unsigned char *)0xF0369)
#define ITLCC0 (*(volatile union un_itlcc0 *)0xF036A).itlcc0
#define ITLCC0_bit (*(volatile union un_itlcc0 *)0xF036A).BIT
#define ITLS0 (*(volatile unsigned char *)0xF036B)
#define ITLMKF0 (*(volatile unsigned char *)0xF036C)
#define SMSI0 (*(volatile unsigned short *)0xF0380)
#define SMSI1 (*(volatile unsigned short *)0xF0382)
#define SMSI2 (*(volatile unsigned short *)0xF0384)
#define SMSI3 (*(volatile unsigned short *)0xF0386)
#define SMSI4 (*(volatile unsigned short *)0xF0388)
#define SMSI5 (*(volatile unsigned short *)0xF038A)
#define SMSI6 (*(volatile unsigned short *)0xF038C)
#define SMSI7 (*(volatile unsigned short *)0xF038E)
#define SMSI8 (*(volatile unsigned short *)0xF0390)
#define SMSI9 (*(volatile unsigned short *)0xF0392)
#define SMSI10 (*(volatile unsigned short *)0xF0394)
#define SMSI11 (*(volatile unsigned short *)0xF0396)
#define SMSI12 (*(volatile unsigned short *)0xF0398)
#define SMSI13 (*(volatile unsigned short *)0xF039A)
#define SMSI14 (*(volatile unsigned short *)0xF039C)
#define SMSI15 (*(volatile unsigned short *)0xF039E)
#define SMSI16 (*(volatile unsigned short *)0xF03A0)
#define SMSI17 (*(volatile unsigned short *)0xF03A2)
#define SMSI18 (*(volatile unsigned short *)0xF03A4)
#define SMSI19 (*(volatile unsigned short *)0xF03A6)
#define SMSI20 (*(volatile unsigned short *)0xF03A8)
#define SMSI21 (*(volatile unsigned short *)0xF03AA)
#define SMSI22 (*(volatile unsigned short *)0xF03AC)
#define SMSI23 (*(volatile unsigned short *)0xF03AE)
#define SMSI24 (*(volatile unsigned short *)0xF03B0)
#define SMSI25 (*(volatile unsigned short *)0xF03B2)
#define SMSI26 (*(volatile unsigned short *)0xF03B4)
#define SMSI27 (*(volatile unsigned short *)0xF03B6)
#define SMSI28 (*(volatile unsigned short *)0xF03B8)
#define SMSI29 (*(volatile unsigned short *)0xF03BA)
#define SMSI30 (*(volatile unsigned short *)0xF03BC)
#define SMSI31 (*(volatile unsigned short *)0xF03BE)
#define SMSG0 (*(volatile unsigned short *)0xF03C0)
#define SMSG1 (*(volatile unsigned short *)0xF03C2)
#define SMSG2 (*(volatile unsigned short *)0xF03C4)
#define SMSG3 (*(volatile unsigned short *)0xF03C6)
#define SMSG4 (*(volatile unsigned short *)0xF03C8)
#define SMSG5 (*(volatile unsigned short *)0xF03CA)
#define SMSG6 (*(volatile unsigned short *)0xF03CC)
#define SMSG7 (*(volatile unsigned short *)0xF03CE)
#define SMSG8 (*(volatile unsigned short *)0xF03D0)
#define SMSG9 (*(volatile unsigned short *)0xF03D2)
#define SMSG10 (*(volatile unsigned short *)0xF03D4)
#define SMSG11 (*(volatile unsigned short *)0xF03D6)
#define SMSG12 (*(volatile unsigned short *)0xF03D8)
#define SMSG13 (*(volatile unsigned short *)0xF03DA)
#define SMSG14 (*(volatile unsigned short *)0xF03DC)
#define SMSG15 (*(volatile unsigned short *)0xF03DE)
#define SMSC (*(volatile union un_smsc *)0xF03E0).smsc
#define SMSC_bit (*(volatile union un_smsc *)0xF03E0).BIT
#define SMSS (*(volatile union un_smss *)0xF03E1).smss
#define SMSS_bit (*(volatile union un_smss *)0xF03E1).BIT
#define FLSIVC0 (*(volatile unsigned short *)0xF0480)
#define FLSIVC1 (*(volatile unsigned short *)0xF0482)
#define GFLASH0 (*(volatile unsigned short *)0xF0488)
#define GFLASH1 (*(volatile unsigned short *)0xF048A)
#define GFLASH2 (*(volatile unsigned short *)0xF048C)
#define GIAWCTL (*(volatile unsigned short *)0xF048E)
#define CTSUCRAL (*(volatile unsigned short *)0xF0500)
#define CTSUCR0 (*(volatile unsigned char *)0xF0500)
#define CTSUCR1 (*(volatile unsigned char *)0xF0501)
#define CTSUCRAH (*(volatile unsigned short *)0xF0502)
#define CTSUCR2 (*(volatile unsigned char *)0xF0502)
#define CTSUCR3 (*(volatile unsigned char *)0xF0503)
#define CTSUCRBL (*(volatile unsigned short *)0xF0504)
#define CTSUSDPRS (*(volatile unsigned char *)0xF0504)
#define CTSUSST (*(volatile unsigned char *)0xF0505)
#define CTSUCRBH (*(volatile unsigned short *)0xF0506)
#define CTSUDCLKC (*(volatile unsigned char *)0xF0507)
#define CTSUMCHL (*(volatile unsigned short *)0xF0508)
#define CTSUMCH0 (*(volatile unsigned char *)0xF0508)
#define CTSUMCH1 (*(volatile unsigned char *)0xF0509)
#define CTSUMCHH (*(volatile unsigned short *)0xF050A)
#define CTSUMFAF (*(volatile unsigned char *)0xF050A)
#define CTSUCHACAL (*(volatile unsigned short *)0xF050C)
#define CTSUCHAC0 (*(volatile unsigned char *)0xF050C)
#define CTSUCHAC1 (*(volatile unsigned char *)0xF050D)
#define CTSUCHACAH (*(volatile unsigned short *)0xF050E)
#define CTSUCHAC2 (*(volatile unsigned char *)0xF050E)
#define CTSUCHAC3 (*(volatile unsigned char *)0xF050F)
#define CTSUCHACBL (*(volatile unsigned short *)0xF0510)
#define CTSUCHAC4 (*(volatile unsigned char *)0xF0510)
#define CTSUCHAC5 (*(volatile unsigned char *)0xF0511)
#define CTSUCHACBH (*(volatile unsigned short *)0xF0512)
#define CTSUCHAC6 (*(volatile unsigned char *)0xF0512)
#define CTSUCHAC7 (*(volatile unsigned char *)0xF0513)
#define CTSUCHTRCAL (*(volatile unsigned short *)0xF0514)
#define CTSUCHTRC0 (*(volatile unsigned char *)0xF0514)
#define CTSUCHTRC1 (*(volatile unsigned char *)0xF0515)
#define CTSUCHTRCAH (*(volatile unsigned short *)0xF0516)
#define CTSUCHTRC2 (*(volatile unsigned char *)0xF0516)
#define CTSUCHTRC3 (*(volatile unsigned char *)0xF0517)
#define CTSUCHTRCBL (*(volatile unsigned short *)0xF0518)
#define CTSUCHTRC4 (*(volatile unsigned char *)0xF0518)
#define CTSUCHTRC5 (*(volatile unsigned char *)0xF0519)
#define CTSUCHTRCBH (*(volatile unsigned short *)0xF051A)
#define CTSUCHTRC6 (*(volatile unsigned char *)0xF051A)
#define CTSUCHTRC7 (*(volatile unsigned char *)0xF051B)
#define CTSUSRL (*(volatile unsigned short *)0xF051C)
#define CTSUST1 (*(volatile unsigned char *)0xF051C)
#define CTSUST (*(volatile unsigned char *)0xF051D)
#define CTSUSO0 (*(volatile unsigned short *)0xF0520)
#define CTSUSO1 (*(volatile unsigned short *)0xF0522)
#define CTSUSC (*(volatile unsigned short *)0xF0524)
#define CTSUUC (*(volatile unsigned short *)0xF0526)
#define CTSUDBGR0 (*(volatile unsigned short *)0xF0528)
#define CTSUDBGR1 (*(volatile unsigned short *)0xF052A)
#define CTSUSUCLK0 (*(volatile unsigned short *)0xF052C)
#define CTSUSUCLK1 (*(volatile unsigned short *)0xF052E)
#define CTSUSUCLK2 (*(volatile unsigned short *)0xF0530)
#define CTSUSUCLK3 (*(volatile unsigned short *)0xF0532)
#define TRNGSDR (*(volatile unsigned char *)0xF0540)
#define TRNGSCR0 (*(volatile union un_trngscr0 *)0xF0542).trngscr0
#define TRNGSCR0_bit (*(volatile union un_trngscr0 *)0xF0542).BIT
#define CTSUTRIM0 (*(volatile unsigned short *)0xF0600)
#define RTRIM (*(volatile unsigned char *)0xF0600)
#define DACTRIM (*(volatile unsigned char *)0xF0601)
#define CTSUTRIM1 (*(volatile unsigned short *)0xF0602)
#define SUADJD (*(volatile unsigned char *)0xF0602)
#define TRESULT4 (*(volatile unsigned char *)0xF0603)
#define CTSUTRIM2 (*(volatile unsigned short *)0xF0604)
#define TRESULT0 (*(volatile unsigned char *)0xF0604)
#define TRESULT1 (*(volatile unsigned char *)0xF0605)
#define CTSUTRIM3 (*(volatile unsigned short *)0xF0606)
#define TRESULT2 (*(volatile unsigned char *)0xF0606)
#define TRESULT3 (*(volatile unsigned char *)0xF0607)

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define ULBS0 ULBS_bit.no0
#define ULBS1 ULBS_bit.no1
#define ULBS2 ULBS_bit.no2
#define ULBS4 ULBS_bit.no4
#define DFLEN DFLCTL_bit.no0
#define MODE0 FLMODE_bit.no6
#define MODE1 FLMODE_bit.no7
#define FLMWEN FLMWRP_bit.no0
#define ESQST FSSE_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define RTCWEN PER0_bit.no7
#define TAU0RES PRR0_bit.no0
#define SAU0RES PRR0_bit.no2
#define SAU1RES PRR0_bit.no3
#define IICA0RES PRR0_bit.no4
#define ADCRES PRR0_bit.no5
#define HIPREC OSMC_bit.no0
#define WUTMMCK0 OSMC_bit.no4
#define RTCLPC OSMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define PORF PORSR_bit.no0
#define CTSUEN PER1_bit.no0
#define UTAEN PER1_bit.no2
#define DTCEN PER1_bit.no3
#define TML32EN PER1_bit.no4
#define SMSEN PER1_bit.no6
#define CTSURES PRR1_bit.no0
#define TML32RES PRR1_bit.no4
#define SMSRES PRR1_bit.no6
#define FWKUP WKUPMD_bit.no0
#define DLVD0FCLR LVDFCLR_bit.no2
#define DLVD1FCLR LVDFCLR_bit.no3
#define RTC128EN RTCC0_bit.no4
#define RCLOE1 RTCC0_bit.no5
#define RTCE RTCC0_bit.no7
#define RWAIT RTCC1_bit.no0
#define RWST RTCC1_bit.no1
#define RIFG RTCC1_bit.no3
#define WAFG RTCC1_bit.no4
#define WALIE RTCC1_bit.no6
#define WALE RTCC1_bit.no7
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define SVADIS0 IICCTL01_bit.no6
#define WUP0 IICCTL01_bit.no7
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define CRC0EN CRC0CTL_bit.no7
#define ISRMA0 ASIMA00_bit.no0
#define ISSMA0 ASIMA00_bit.no1
#define RXEA0 ASIMA00_bit.no5
#define TXEA0 ASIMA00_bit.no6
#define UARTAEN0 ASIMA00_bit.no7
#define OVECTA0 ASCTA0_bit.no0
#define FECTA0 ASCTA0_bit.no1
#define PECTA0 ASCTA0_bit.no2
#define ITLEN00 ITLCTL0_bit.no0
#define ITLEN01 ITLCTL0_bit.no1
#define ITLEN02 ITLCTL0_bit.no2
#define ITLEN03 ITLCTL0_bit.no3
#define CAPR0 ITLCC0_bit.no4
#define CAPF0CR ITLCC0_bit.no6
#define LONGWAIT SMSC_bit.no4
#define SMSTRGWAIT SMSC_bit.no5
#define SMSSTOP SMSC_bit.no6
#define SMSSTART SMSC_bit.no7
#define SMSSTAT SMSS_bit.no7
#define TRNGST TRNGSCR0_bit.no2
#define TRNGEN TRNGSCR0_bit.no3
#define TRNGRDY TRNGSCR0_bit.no7

/*
 Interrupt vector addresses
 */
#endif
