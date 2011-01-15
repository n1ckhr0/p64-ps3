/*
 * CpuPS3.h
 *
 *  Created on: Jan 13, 2011
 *      Author: n1ckhr0
 */

#ifndef CPUPS3_H_
#define CPUPS3_H_

#include "OpCode.h"

typedef struct {
	//HANDLE hStepping;

	BOOL DoSomething;
	BOOL CloseCPU;
	BOOL ChangeWindow;
	BOOL CheckInterrupts;
	BOOL Pause;
	BOOL SaveState;
	BOOL RestoreState;
	BOOL DoInterrupt;
	BOOL Stepping;
} CPU_ACTION;


#define MaxTimers	4
#define CompareTimer			0
#define SiTimer					1
#define PiTimer					2
#define ViTimer					3


typedef struct {
	int  NextTimer[MaxTimers];
	BOOL Active[MaxTimers];
	int  CurrentTimerType;
	int  Timer;
} SYSTEM_TIMERS;

// Functions

#define NORMAL					0
#define DO_DELAY_SLOT			1
#define DO_END_DELAY_SLOT		2
#define DELAY_SLOT				3
#define END_DELAY_SLOT			4
#define LIKELY_DELAY_SLOT		5
#define JUMP	 				6
#define DELAY_SLOT_DONE			7
#define LIKELY_DELAY_SLOT_DONE	8
#define END_BLOCK 				9

enum SaveType {
	Auto,
	Eeprom_4K,
	Eeprom_16K,
	Sram,
	FlashRam
};

extern int NextInstruction, JumpToLocation, ManualPaused, CPU_Paused, CountPerOp;

extern OPCODE Opcode;

#endif /* CPUPS3_H_ */
