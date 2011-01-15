/*
 * typesPS3.h
 *
 *  Created on: Jan 13, 2011
 *      Author: n1ckhr0
 */

#ifndef TYPESPS3_H_
#define TYPESPS3_H_

#include <psl1ght/types.h>

typedef enum BOOL
{
	TRUE,
	FALSE
} BOOL;

typedef unsigned char BYTE;

typedef union tagUWORD {
	s32					W;
	float				F;
	u32					UW;
	s16					HW[2];
	u16					UHW[2];
	char				B[4];
	unsigned char		UB[4];
} MIPS_WORD;

typedef union tagUDWORD {
	double				D;
	u64					DW;
	u64					UDW;
	s32					W[2];
	float				F[2];
	u32					UW[2];
	s16					HW[4];
	u16					UHW[4];
	char				B[8];
	unsigned char		UB[8];
} MIPS_DWORD;

#endif /* TYPESPS3_H_ */
