/*
 * TIMER_0_int.h
 *
 * Created: 10/19/2022 11:19:45 AM
 *  Author: gehad
 */ 


#ifndef TIMER_0_INT_H_
#define TIMER_0_INT_H_

//#include "TIMER_0_private.h"

void TIMER_voidInit(void);

void TIMER_voidStart(void);

void TIMER_voidStop(void);

void TIMER_0_voidSetDelay(u64 Delay_ms);

#endif /* TIMER_0_INT_H_ */