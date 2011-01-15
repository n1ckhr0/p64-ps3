/*
 * tlbPS3.h
 *
 *  Created on: Jan 15, 2011
 *      Author: n1ckhr0
 */

#ifndef TLBPS3_H_
#define TLBPS3_H_

typedef struct {
	BOOL EntryDefined;
	union {
		unsigned long Value;
		unsigned char A[4];

		struct BreakDownPageMask{
			unsigned zero : 13;
			unsigned Mask : 12;
			unsigned zero2 : 7;
		} ;

	} PageMask;

	union {
		unsigned long Value;
		unsigned char A[4];

		struct BreakDownEntryHi {
			unsigned ASID : 8;
			unsigned Zero : 4;
			unsigned G : 1;
			unsigned VPN2 : 19;
		};

	} EntryHi;

	union {
		unsigned long Value;
		unsigned char A[4];

		struct BreakDownEntryLo0{
			unsigned GLOBAL: 1;
			unsigned V : 1;
			unsigned D : 1;
			unsigned C : 3;
			unsigned PFN : 20;
			unsigned ZERO: 6;
		} ;

	} EntryLo0;

	union {
		unsigned long Value;
		unsigned char A[4];

		struct BreakDownEntryLo1{
			unsigned GLOBAL: 1;
			unsigned V : 1;
			unsigned D : 1;
			unsigned C : 3;
			unsigned PFN : 20;
			unsigned ZERO: 6;
		} ;

	} EntryLo1;
} TLB;

typedef struct {
   s32 VSTART;
   s32 VEND;
   s32 PHYSSTART;
   BOOL VALID;
   BOOL DIRTY;
   BOOL GLOBAL;
   BOOL ValidEntry;
} FASTTLB;

extern FASTTLB FastTlb[64];
extern TLB tlb[32];

BOOL AddressDefined ( u32 VAddr);
void InitilizeTLB   ( void );
void SetupTLB       ( void );
void TLB_Probe      ( void );
void TLB_Read       ( void );
BOOL TranslateVaddr ( u32 * Addr);
void WriteTLBEntry  ( int index );

#endif /* TLBPS3_H_ */
