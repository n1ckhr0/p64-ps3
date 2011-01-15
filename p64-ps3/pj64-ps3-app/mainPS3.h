/*
 * mainPS3.h
 *
 *  Created on: Jan 13, 2011
 *      Author: n1ckhr0
 */

#ifndef MAINPS3_H_
#define MAINPS3_H_

#include "typesPS3.h"

/********* General Defaults **********/
#if (!defined(EXTERNAL_RELEASE))
#define AppVer   "Project64 - Build 52 by Zilmar and Jabo"
#define AppName  "Project64 (Build 52)"
#else
//#define BETA_VERSION
#define AppVer   "Project64 - Version 1.4 by Zilmar and Jabo"
#ifdef BETA_VERSION
#define AppName  "Project64 Version 1.4 (beta 4)"
#else
#define AppName  "Project64 Version 1.4"
#endif
#endif

#define IniName						"Project64.rdb"
#define NotesIniName				"Project64.rdn"
#define ExtIniName					"Project64.rdx"
#define CheatIniName				"Project64.cht"
#define LangFileName				"Project64.lng"
#define CacheFileName				"Project64.cache"
#define Default_AdvancedBlockLink	TRUE
#define Default_AutoStart			TRUE
#define Default_AutoSleep			TRUE
#define Default_DisableRegCaching	FALSE
#define Default_RdramSize			0x800000
#define Default_UseIni				TRUE
#define Default_AutoZip				TRUE
#define Default_LimitFPS			TRUE
#define Default_RomsToRemember		4
#define Default_RomsDirsToRemember	4
#define LinkBlocks


/*********** Menu Stuff **************/
#define ID_FILE_RECENT_FILE		1000
#define ID_FILE_RECENT_DIR		1100
#define ID_LANG_SELECT			2000

/************** Core *****************/
#define CPU_Default					-1
#define CPU_Interpreter				0
#define CPU_Recompiler				1
#define CPU_SyncCores				2
#define Default_CPU					CPU_Recompiler

/*********** GFX Defaults ************/
#define NoOfFrames	7

/******* Self modifying code *********/
#define ModCode_Default				-1
#define ModCode_None				0
#define ModCode_Cache				1
#define ModCode_ProtectedMemory		2
#define ModCode_ChangeMemory		4
#define ModCode_CheckMemoryCache	6

/********** Counter Factor ***********/
#define Default_CountPerOp			2

/************ Debugging **************/
#define Default_HaveDebugger		FALSE
#define Default_AutoMap				TRUE
#define Default_ShowUnhandledMemory	FALSE
#define Default_ShowTLBMisses		FALSE
#define Default_ShowDlistCount		FALSE
#define Default_ShowCompileMemory	TRUE
#define Default_ShowPifRamErrors	FALSE
#define Default_SelfModCheck		ModCode_CheckMemoryCache

/************ Profiling **************/
#define Default_ShowCPUPer			FALSE
#define Default_ProfilingOn			FALSE
#define Default_IndvidualBlock		FALSE

/********** Rom Browser **************/
#define Default_UseRB				TRUE
#define Default_Rercursion			FALSE
#define Default_RomStatus			"Unknown"

/************* Logging ***************/
//#define Log_x86Code

/********* Global Variables **********/
extern u64 Frequency, Frames[NoOfFrames], LastFrame;
extern BOOL HaveDebugger, AutoLoadMapFile, ShowUnhandledMemory, ShowTLBMisses,
	ShowDListAListCount, ShowCompMem, Profiling, IndvidualBlock, AutoStart,
	AutoSleep, DisableRegCaching, UseIni, UseTlb, UseLinking, RomBrowser,
	IgnoreMove, Rercursion, ShowPifRamErrors, LimitFPS, ShowCPUPer, AutoZip,
	AutoFullScreen, SystemABL;
extern u32 CurrentFrame, CPU_Type, SystemCPU_Type, SelfModCheck, SystemSelfModCheck,
	RomsToRemember, RomDirsToRemember;
extern char CurrentSave[256];

#endif /* MAINPS3_H_ */
