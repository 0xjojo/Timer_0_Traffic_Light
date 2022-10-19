/*
 * TIMER_0_prog.c
 *
 * Created: 10/19/2022 11:20:42 AM
 *  Author: gehad
 */ 
#include "BIT_math.h"
#include "STD_types.h"
#include "TIMER_0_int.h"
#include "TIMER_0_config.h"
#include "TIMER_0_private.h"

u8 Init_Value = 0;
u32 Number_OVRflows = 0;
void TIMER_voidInit(void)
{
	TCCR0 |= 0x00;
	
	TIMSK |= 0x01;
	
	SREG |= 0x80;
}

void TIMER_voidStart(void)
{
	TCCR0 |= 0x05; 
}

void TIMER_voidStop(void)
{
	 CLEAR_BIT(TCCR0,0);
	 CLEAR_BIT(TCCR0,1);
	 CLEAR_BIT(TCCR0,2);
}

void TIMER_0_voidSetDelay(u64 Delay_ms)
{
	u8 Tick_Time = (1024/16);
	u32 Total_Ticks = (Delay_ms * 1000) / Tick_Time;
	Number_OVRflows = Total_Ticks / 256 ; 
	Init_Value = 256  - (Total_Ticks % 256) ;
	TCNT0 = Init_Value ;
	Number_OVRflows++;
	
}