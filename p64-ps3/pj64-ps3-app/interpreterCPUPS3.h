/*
 * interpreterCPUPS3.h
 *
 *  Created on: Jan 13, 2011
 *      Author: n1ckhr0
 */

#ifndef INTERPRETERCPUPS3_H_
#define INTERPRETERCPUPS3_H_

void BuildInterpreter         (void);
void ExecuteInterpreterOpCode (void);
void StartInterpreterCPU      (void);
void TestInterpreterJump      (s32 PC, s32 TargetPC, int Reg1, int Reg2 );

extern void* R4300i_Opcode[64];

#endif /* INTERPRETERCPUPS3_H_ */
