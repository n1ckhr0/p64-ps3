#include <psl1ght/lv2.h>

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>

#include <sysutil/video.h>
#include <rsx/gcm.h>
#include <rsx/reality.h>

#include <io/pad.h>

#include <psl1ght/lv2.h>

#include "mainPS3.h"
//#include "Memory.h"
//#include "Registers.h"

#include "rsxutil.h"

u64 Frequency, Frames[NoOfFrames], LastFrame;
BOOL HaveDebugger, AutoLoadMapFile, ShowUnhandledMemory, ShowTLBMisses,
	ShowDListAListCount, ShowCompMem, Profiling, IndvidualBlock, AutoStart,
	AutoSleep, DisableRegCaching, UseIni, UseTlb, UseLinking, RomBrowser,
	IgnoreMove, Rercursion, ShowPifRamErrors, LimitFPS, ShowCPUPer, AutoZip,
	AutoFullScreen, SystemABL;
u32 CurrentFrame, CPU_Type, SystemCPU_Type, SelfModCheck, SystemSelfModCheck,
	RomsToRemember, RomDirsToRemember;

char CurrentSave[256];

int currentBuffer = 0;

int InitializeApp()
{
	/*if (!Allocate_Memory()) {
		return 1;
	}*/

	HaveDebugger = FALSE;
	IgnoreMove = FALSE;
	CPU_Type = Default_CPU;
	SystemCPU_Type = Default_CPU;
	SystemSelfModCheck = Default_SelfModCheck;
	//SystemRdramSize = Default_RdramSize;
	SystemABL = Default_AdvancedBlockLink;
	AutoStart = Default_AutoStart;
	AutoSleep = Default_AutoSleep;
	DisableRegCaching = Default_DisableRegCaching;
	UseIni = Default_UseIni;
	AutoZip = Default_AutoZip;
	AutoFullScreen = FALSE;
	RomsToRemember = Default_RomsToRemember;
	RomDirsToRemember = Default_RomsDirsToRemember;
	AutoLoadMapFile = Default_AutoMap;
	ShowUnhandledMemory = Default_ShowUnhandledMemory;
	ShowCPUPer = Default_ShowCPUPer;
	LimitFPS = Default_LimitFPS;
	ShowTLBMisses = Default_ShowTLBMisses;
	Profiling = Default_ProfilingOn;
	IndvidualBlock = Default_IndvidualBlock;
	RomBrowser = Default_UseRB;
	Rercursion = Default_Rercursion;

	//SetupRegisters(&Registers);

	return 0;
}

void drawFrame(u32 *buffer, long frame) {
	s32 i, j;
	for(i = 0; i < res.height; i++) {
		s32 color = (i / (res.height * 1.0) * 256);
		// This should make a nice black to green graident
		color = (color << 8) | ((frame % 255) << 16);
		for(j = 0; j < res.width; j++)
			buffer[i* res.width + j] = color;
	}

}

s32 main(s32 argc, const char* argv[])
{
	PadInfo padinfo;
	PadData paddata;
	int i;

	init_screen();
	ioPadInit(7);

	long frame = 0; // To keep track of how many frames we have rendered.

	// Ok, everything is setup. Now for the main loop.
	while(1){
		// Check the pads.
		ioPadGetInfo(&padinfo);
		for(i=0; i<MAX_PADS; i++){
			if(padinfo.status[i]){
				ioPadGetData(i, &paddata);

				if(paddata.BTN_CROSS){
					return 0;
				}
			}

		}

		waitFlip(); // Wait for the last flip to finish, so we can draw to the old buffer
		drawFrame(buffer[currentBuffer], frame++); // Draw into the unused buffer
		flip(currentBuffer); // Flip buffer onto screen
		currentBuffer = !currentBuffer;

	}

	return 0;
}
