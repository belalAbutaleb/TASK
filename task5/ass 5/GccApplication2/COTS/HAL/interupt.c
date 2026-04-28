/*
 * interupt.c
 *
 * Created: 4/26/2026 10:10:47 PM
 *  Author: Belal
 */ 

#include "interupt.h"


void SetupInterrupt(INT id){
	SREG |=(1<<7);
	switch(id){
		case INT_0:
		{
			GPIO_setupPinDirection(3,2,PORT_INPUT);
			MCUCR |=(1<<ISC00) | (1<<ISC01);
			GICR |= (1<<INT0);
			
			
			
			break;	
		}
		case INT_1:
		{
			GPIO_setupPinDirection(3,3,PORT_INPUT);
			MCUCR |=(1<<ISC10) | (1<<ISC11);
			GICR |= (1<<INT1);
			
			break;
		}
		case INT_2:
		{
			//GPIO_setupPinDirection(1,3,PORT_INPUT);
			//MCUCR |=(1<<ISC00) | (1<<ISC01);
			//GICR |= (1<<INT1);
			
			break;
		}
	}
}
