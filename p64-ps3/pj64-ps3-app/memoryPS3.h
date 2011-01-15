/*
 * memoryPS3.h
 *
 *  Created on: Jan 15, 2011
 *      Author: n1ckhr0
 */

#ifndef MEMORYPS3_H_
#define MEMORYPS3_H_

#define LargeCompileBufferSize	0x03200000
#define NormalCompileBufferSize	0x01400000

extern s32 *TLB_ReadMap, *TLB_WriteMap, RdramSize, SystemRdramSize;
extern BYTE *N64MEM, *RDRAM, *DMEM, *IMEM, *ROM;
extern void ** JumpTable, ** DelaySlotTable;
extern BYTE *RecompCode, *RecompPos;
extern BOOL WrittenToRom;

/* Memory Control */
int  Allocate_ROM                ( void );
int  Allocate_Memory             ( void );
void Release_Memory              ( void );

/* CPU memory functions */
// TODO
//int  r4300i_Command_MemoryFilter ( u32 dwExptCode, LPEXCEPTION_POINTERS lpEP );
//int  r4300i_CPU_MemoryFilter     ( u32 dwExptCode, LPEXCEPTION_POINTERS lpEP );
int  r4300i_LB_NonMemory         ( u32 PAddr, u32 * Value, BOOL SignExtend );
BOOL r4300i_LB_VAddr             ( u32 VAddr, BYTE * Value );
BOOL r4300i_LD_VAddr             ( u32 VAddr, u64 * Value );
int  r4300i_LH_NonMemory         ( u32 PAddr, u32 * Value, int SignExtend );
BOOL r4300i_LH_VAddr             ( u32 VAddr, u16 * Value );
int  r4300i_LW_NonMemory         ( u32 PAddr, u32 * Value );
void r4300i_LW_PAddr             ( u32 PAddr, u32 * Value );
BOOL r4300i_LW_VAddr             ( u32 VAddr, u32 * Value );
int  r4300i_SB_NonMemory         ( u32 PAddr, BYTE Value );
BOOL r4300i_SB_VAddr             ( u32 VAddr, BYTE Value );
BOOL r4300i_SD_VAddr             ( u32 VAddr, u64 Value );
int  r4300i_SH_NonMemory         ( u32 PAddr, u16 Value );
BOOL r4300i_SH_VAddr             ( u32 VAddr, u16 Value );
int  r4300i_SW_NonMemory         ( u32 PAddr, u32 Value );
BOOL r4300i_SW_VAddr             ( u32 VAddr, u32 Value );

/* Recompiler Memory Functions */
void Compile_LB                  ( int Reg, u32 Addr, BOOL SignExtend );
void Compile_LH                  ( int Reg, u32 Addr, BOOL SignExtend );
void Compile_LW                  ( int Reg, u32 Addr );
void Compile_SB_Const            ( BYTE Value, u32 Addr );
void Compile_SB_Register         ( int x86Reg, u32 Addr );
void Compile_SH_Const            ( u16 Value, u32 Addr );
void Compile_SH_Register         ( int x86Reg, u32 Addr );
void Compile_SW_Const            ( u32 Value, u32 Addr );
void Compile_SW_Register         ( int x86Reg, u32 Addr );
void ResetRecompCode             ( void );



#endif /* MEMORYPS3_H_ */
