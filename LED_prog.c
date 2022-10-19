/************************/
/*     0xjojo           */
/*	   LED_prog         */
/*     Version: 1.0     */
/************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "LED_private.h"
#include "LED_config.h"


void LED_voidLedOn(u8 Copy_u8PinNum)
{
	switch (Copy_u8PinNum){
	case LED_U8_0:
	DIO_voidSetPinValue(DIO_U8_PIN18,DIO_U8_HIGH);
	break;
	case LED_U8_1:
	DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_HIGH);
	break;
	case LED_U8_2:
	DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_HIGH);
	break;
	}
}
void LED_voidLedOff(u8 Copy_u8PinNum)
{
	switch (Copy_u8PinNum)
	{
	case LED_U8_0:
	DIO_voidSetPinValue(DIO_U8_PIN18,DIO_U8_LOW);
	break;
	case LED_U8_1:
	DIO_voidSetPinValue(DIO_U8_PIN23,DIO_U8_LOW);
	break;
	case LED_U8_2:
	DIO_voidSetPinValue(DIO_U8_PIN27,DIO_U8_LOW);
	break;
	}
}