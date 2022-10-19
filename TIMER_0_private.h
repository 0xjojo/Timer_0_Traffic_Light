/*
 * TIMER_0_private.h
 *
 * Created: 10/19/2022 9:33:25 AM
 *  Author: gehad
 */ 


#ifndef TIMER_0_PRIVATE_H_
#define TIMER_0_PRIVATE_H_

#define TCCR0   (*(volatile u8*)(0x53))
#define TCNT0   (*(volatile u8*)(0x52))
#define TIMSK   (*(volatile u8*)(0x59))
#define SREG   (*(volatile u8*)(0x5F))


#endif /* TIMER_0_PRIVATE_H_ */