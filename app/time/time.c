/*
 * time.c
 *
 *  Created on: 2018-1-24
 *      Author: Administrator
 */


#include <ti_me.h>
#include "leds.h"



void TIM0_Init(float Freq, float Period)
{
	EALLOW;
	SysCtrlRegs.PCLKCR3.bit.CPUTIMER0ENCLK = 1; // CPU Timer 0
	EDIS;

	EALLOW;
	PieVectTable.TINT0 = &TIM0_IRQn;
	EDIS;

	// CPU Timer 0
	// Initialize address pointers to respective timer registers:
	CpuTimer0.RegsAddr = &CpuTimer0Regs;
	// Initialize timer period to maximum:
	CpuTimer0Regs.PRD.all  = 0xFFFFFFFF;
	// Initialize pre-scale counter to divide by 1 (SYSCLKOUT):
	CpuTimer0Regs.TPR.all  = 0;
	CpuTimer0Regs.TPRH.all = 0;
	// Make sure timer is stopped:
	CpuTimer0Regs.TCR.bit.TSS = 1;
	// Reload all counter register with period value:
	CpuTimer0Regs.TCR.bit.TRB = 1;
	// Reset interrupt counters:
	CpuTimer0.InterruptCount = 0;

	ConfigCpuTimer(&CpuTimer0, Freq, Period);

	CpuTimer0Regs.TCR.bit.TSS=0;

	IER |= M_INT1;

	PieCtrlRegs.PIEIER1.bit.INTx7 = 1;

	EINT;
	ERTM;

}






