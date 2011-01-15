/*
 * registerPS3.c
 *
 *  Created on: Jan 15, 2011
 *      Author: n1ckhr0
 */

#include "registersPS3.h"

char *GPR_Name[32] = {"r0","at","v0","v1","a0","a1","a2","a3",
                     "t0","t1","t2","t3","t4","t5","t6","t7",
                     "s0","s1","s2","s3","s4","s5","s6","s7",
                     "t8","t9","k0","k1","gp","sp","s8","ra"};

char *GPR_NameHi[32] = {"r0.HI","at.HI","v0.HI","v1.HI","a0.HI","a1.HI",
						"a2.HI","a3.HI","t0.HI","t1.HI","t2.HI","t3.HI",
						"t4.HI","t5.HI","t6.HI","t7.HI","s0.HI","s1.HI",
						"s2.HI","s3.HI","s4.HI","s5.HI","s6.HI","s7.HI",
						"t8.HI","t9.HI","k0.HI","k1.HI","gp.HI","sp.HI",
						"s8.HI","ra.HI"};

char *GPR_NameLo[32] = {"r0.LO","at.LO","v0.LO","v1.LO","a0.LO","a1.LO",
						"a2.LO","a3.LO","t0.LO","t1.LO","t2.LO","t3.LO",
						"t4.LO","t5.LO","t6.LO","t7.LO","s0.LO","s1.LO",
						"s2.LO","s3.LO","s4.LO","s5.LO","s6.LO","s7.LO",
						"t8.LO","t9.LO","k0.LO","k1.LO","gp.LO","sp.LO",
						"s8.LO","ra.LO"};

char *FPR_Name[32] = {"f0","f1","f2","f3","f4","f5","f6","f7",
                     "f8","f9","f10","f11","f12","f13","f14","f15",
                     "f16","f17","f18","f19","f20","f21","f22","f23",
                     "f24","f25","f26","f27","f28","f29","f30","f31"};

char *FPR_NameHi[32] = {"f0.hi","f1.hi","f2.hi","f3.hi","f4.hi","f5.hi","f6.hi","f7.hi",
                     "f8.hi","f9.hi","f10.hi","f11.hi","f12.hi","f13.hi","f14.hi","f15.hi",
                     "f16.hi","f17.hi","f18.hi","f19.hi","f20.hi","f21.hi","f22.hi","f23.hi",
                     "f24.hi","f25.hi","f26.hi","f27.hi","f28.hi","f29.hi","f30.hi","f31.hi"};

char *FPR_NameLo[32] = {"f0.lo","f1.lo","f2.lo","f3.lo","f4.lo","f5.lo","f6.lo","f7.lo",
                     "f8.lo","f9.lo","f10.lo","f11.lo","f12.lo","f13.lo","f14.lo","f15.lo",
                     "f16.lo","f17.lo","f18.lo","f19.lo","f20.lo","f21.lo","f22.lo","f23.lo",
                     "f24.lo","f25.lo","f26.lo","f27.lo","f28.lo","f29.lo","f30.lo","f31.lo"};

char *FPR_Ctrl_Name[32] = {"Revision","Unknown","Unknown","Unknown","Unknown",
					"Unknown","Unknown","Unknown","Unknown","Unknown","Unknown",
					"Unknown","Unknown","Unknown","Unknown","Unknown","Unknown",
					"Unknown","Unknown","Unknown","Unknown","Unknown","Unknown",
					"Unknown","Unknown","Unknown","Unknown","Unknown","Unknown",
					"Unknown","Unknown","FCSR"};

char *Cop0_Name[32] = {"Index","Random","EntryLo0","EntryLo1","Context","PageMask","Wired","",
                    "BadVAddr","Count","EntryHi","Compare","Status","Cause","EPC","PRId",
                    "Config","LLAddr","WatchLo","WatchHi","XContext","","","",
                    "","","ECC","CacheErr","TagLo","TagHi","ErrEPC",""};

u32 PROGRAM_COUNTER, * CP0,*FPCR,*RegRDRAM,*RegSP,*RegDPC,*RegMI,*RegVI,*RegAI,*RegPI,
	*RegRI,*RegSI, HalfLine, RegModValue, ViFieldNumber, LLBit, LLAddr;
void * FPRDoubleLocation[32], * FPRFloatLocation[32];
MIPS_DWORD *GPR, *FPR, HI, LO;
N64_REGISTERS Registers;
int fpuControl;

// TODO
