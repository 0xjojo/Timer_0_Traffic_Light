/*
 * Timer_0.c
 *
 * Created: 10/19/2022 9:14:33 AM
 * Author : gehad
 */ 

#include <avr/interrupt.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "LED_int.h"
#include "TIMER_0_int.h"

extern u8 Init_Value;

extern u32 Number_OVRflows;

u8 state = 0;
int main(void)
{
	TIMER_voidInit(); 
	TIMER_0_voidSetDelay(1000000);
	TIMER_voidStart();
    /* Replace with your application code */
    while (1) 
    {
    }
}
ISR(TIMER0_OVF_vect)
{
	static u32 cnt = 0;
	cnt++;
	if(cnt == Number_OVRflows)
	{
		TCNT0 = Init_Value;
		cnt = 0;
		if (state == 0)
		{
		LED_voidLedOn(0);
		LED_voidLedOff(1);
		LED_voidLedOff(2);
		}
		else if( state == 1)
		{
		LED_voidLedOn(1);
		LED_voidLedOff(0);
		LED_voidLedOff(2);
		}
		else if( state == 2)
		{
		LED_voidLedOn(2);
		LED_voidLedOff(1);
		LED_voidLedOff(0);
		}
		if( state < 2)
		state++;
		else if(state ==2)
		state = 0;
		
	}
}
