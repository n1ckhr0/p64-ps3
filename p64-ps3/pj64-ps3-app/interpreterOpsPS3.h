/*
 * interpreterOpsPS3.h
 *
 *  Created on: Jan 14, 2011
 *      Author: n1ckhr0
 */

#ifndef INTERPRETEROPSPS3_H_
#define INTERPRETEROPSPS3_H_

void  r4300i_J              ( void );
void  r4300i_JAL            ( void );
void  r4300i_BNE            ( void );
void  r4300i_BEQ            ( void );
void  r4300i_BLEZ           ( void );
void  r4300i_BGTZ           ( void );
void  r4300i_ADDI           ( void );
void  r4300i_ADDIU          ( void );
void  r4300i_SLTI           ( void );
void  r4300i_SLTIU          ( void );
void  r4300i_ANDI           ( void );
void  r4300i_ORI            ( void );
void  r4300i_XORI           ( void );
void  r4300i_LUI            ( void );
void  r4300i_BEQL           ( void );
void  r4300i_BNEL           ( void );
void  r4300i_BLEZL          ( void );
void  r4300i_BGTZL          ( void );
void  r4300i_DADDIU         ( void );
void  r4300i_LDL            ( void );
void  r4300i_LDR            ( void );
void  r4300i_LB             ( void );
void  r4300i_LH             ( void );
void  r4300i_LWL            ( void );
void  r4300i_LW             ( void );
void  r4300i_LBU            ( void );
void  r4300i_LHU            ( void );
void  r4300i_LWR            ( void );
void  r4300i_LWU            ( void );
void  r4300i_SB             ( void );
void  r4300i_SH             ( void );
void  r4300i_SWL            ( void );
void  r4300i_SW             ( void );
void  r4300i_SDL            ( void );
void  r4300i_SDR            ( void );
void  r4300i_SWR            ( void );
void  r4300i_CACHE          ( void );
void  r4300i_LL             ( void );
void  r4300i_LWC1           ( void );
void  r4300i_LDC1           ( void );
void  r4300i_LD             ( void );
void  r4300i_SC             ( void );
void  r4300i_SWC1           ( void );
void  r4300i_SDC1           ( void );
void  r4300i_SD             ( void );

/********************** r4300i OpCodes: Special **********************/
void  r4300i_SPECIAL_SLL    ( void );
void  r4300i_SPECIAL_SRL    ( void );
void  r4300i_SPECIAL_SRA    ( void );
void  r4300i_SPECIAL_SLLV   ( void );
void  r4300i_SPECIAL_SRLV   ( void );
void  r4300i_SPECIAL_SRAV   ( void );
void  r4300i_SPECIAL_JR     ( void );
void  r4300i_SPECIAL_JALR   ( void );
void  r4300i_SPECIAL_SYSCALL ( void );
void  r4300i_SPECIAL_BREAK   ( void );
void  r4300i_SPECIAL_SYNC    ( void );
void  r4300i_SPECIAL_MFHI    ( void );
void  r4300i_SPECIAL_MTHI    ( void );
void  r4300i_SPECIAL_MFLO   ( void );
void  r4300i_SPECIAL_MTLO   ( void );
void  r4300i_SPECIAL_DSLLV  ( void );
void  r4300i_SPECIAL_DSRLV  ( void );
void  r4300i_SPECIAL_DSRAV  ( void );
void  r4300i_SPECIAL_MULT   ( void );
void  r4300i_SPECIAL_MULTU  ( void );
void  r4300i_SPECIAL_DIV    ( void );
void  r4300i_SPECIAL_DIVU   ( void );
void  r4300i_SPECIAL_DMULT  ( void );
void  r4300i_SPECIAL_DMULTU ( void );
void  r4300i_SPECIAL_DDIV   ( void );
void  r4300i_SPECIAL_DDIVU  ( void );
void  r4300i_SPECIAL_ADD    ( void );
void  r4300i_SPECIAL_ADDU   ( void );
void  r4300i_SPECIAL_SUB    ( void );
void  r4300i_SPECIAL_SUBU   ( void );
void  r4300i_SPECIAL_AND    ( void );
void  r4300i_SPECIAL_OR     ( void );
void  r4300i_SPECIAL_XOR    ( void );
void  r4300i_SPECIAL_NOR    ( void );
void  r4300i_SPECIAL_SLT    ( void );
void  r4300i_SPECIAL_SLTU   ( void );
void  r4300i_SPECIAL_DADD   ( void );
void  r4300i_SPECIAL_DADDU  ( void );
void  r4300i_SPECIAL_DSUB   ( void );
void  r4300i_SPECIAL_DSUBU  ( void );
void  r4300i_SPECIAL_TEQ    ( void );
void  r4300i_SPECIAL_DSLL   ( void );
void  r4300i_SPECIAL_DSRL   ( void );
void  r4300i_SPECIAL_DSRA   ( void );
void  r4300i_SPECIAL_DSLL32 ( void );
void  r4300i_SPECIAL_DSRL32 ( void );
void  r4300i_SPECIAL_DSRA32 ( void );

/********************** r4300i OpCodes: RegImm **********************/
void  r4300i_REGIMM_BLTZ    ( void );
void  r4300i_REGIMM_BGEZ    ( void );
void  r4300i_REGIMM_BLTZL   ( void );
void  r4300i_REGIMM_BGEZL   ( void );
void  r4300i_REGIMM_BLTZAL  ( void );
void  r4300i_REGIMM_BGEZAL  ( void );

/************************** COP0 functions **************************/
void  r4300i_COP0_MF        ( void );
void  r4300i_COP0_MT        ( void );

/************************** COP0 CO functions ***********************/
void  r4300i_COP0_CO_TLBR   ( void );
void  r4300i_COP0_CO_TLBWI  ( void );
void  r4300i_COP0_CO_TLBWR  ( void );
void  r4300i_COP0_CO_TLBP   ( void );
void  r4300i_COP0_CO_ERET   ( void );

/************************** COP1 functions **************************/
void  r4300i_COP1_MF        ( void );
void  r4300i_COP1_DMF       ( void );
void  r4300i_COP1_CF        ( void );
void  r4300i_COP1_MT        ( void );
void  r4300i_COP1_DMT       ( void );
void  r4300i_COP1_CT        ( void );

/************************* COP1: BC1 functions ***********************/
void  r4300i_COP1_BCF       ( void );
void  r4300i_COP1_BCT       ( void );
void  r4300i_COP1_BCFL      ( void );
void  r4300i_COP1_BCTL      ( void );

/************************** COP1: S functions ************************/
void  r4300i_COP1_S_ADD     ( void );
void  r4300i_COP1_S_SUB     ( void );
void  r4300i_COP1_S_MUL     ( void );
void  r4300i_COP1_S_DIV     ( void );
void  r4300i_COP1_S_SQRT    ( void );
void  r4300i_COP1_S_ABS     ( void );
void  r4300i_COP1_S_MOV     ( void );
void  r4300i_COP1_S_NEG     ( void );
void  r4300i_COP1_S_TRUNC_L ( void );
void  r4300i_COP1_S_ROUND_W ( void );
void  r4300i_COP1_S_TRUNC_W ( void );
void  r4300i_COP1_S_FLOOR_W ( void );
void  r4300i_COP1_S_CVT_D   ( void );
void  r4300i_COP1_S_CVT_W   ( void );
void  r4300i_COP1_S_CVT_L   ( void );
void  r4300i_COP1_S_CMP     ( void );

/************************** COP1: D functions ************************/
void  r4300i_COP1_D_ADD     ( void );
void  r4300i_COP1_D_SUB     ( void );
void  r4300i_COP1_D_MUL     ( void );
void  r4300i_COP1_D_DIV     ( void );
void  r4300i_COP1_D_SQRT    ( void );
void  r4300i_COP1_D_ABS     ( void );
void  r4300i_COP1_D_MOV     ( void );
void  r4300i_COP1_D_NEG     ( void );
void  r4300i_COP1_D_ROUND_W ( void );
void  r4300i_COP1_D_TRUNC_W ( void );
void  r4300i_COP1_D_CVT_S   ( void );
void  r4300i_COP1_D_CVT_W   ( void );
void  r4300i_COP1_D_CVT_L   ( void );
void  r4300i_COP1_D_CMP     ( void );

/************************** COP1: W functions ************************/
void  r4300i_COP1_W_CVT_S   ( void );
void  r4300i_COP1_W_CVT_D   ( void );

/************************** COP1: L functions ************************/
void  r4300i_COP1_L_CVT_S   ( void );
void  r4300i_COP1_L_CVT_D   ( void );

/************************** Other functions **************************/
void   R4300i_UnknownOpcode ( void );

extern u32 SWL_MASK[4], SWR_MASK[4], LWL_MASK[4], LWR_MASK[4];
extern int SWL_SHIFT[4], SWR_SHIFT[4], LWL_SHIFT[4], LWR_SHIFT[4];
//extern int RoundingModel;

#endif /* INTERPRETEROPSPS3_H_ */
