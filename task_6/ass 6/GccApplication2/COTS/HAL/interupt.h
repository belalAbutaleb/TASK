
/*
 * interupt.h
 *
 * Created: 4/26/2026 10:07:29 PM
 *  Author: Belal
 */ 
#include "../MCAL/GPIO.h"
#include <avr/interrupt.h>
#include "avr/io.h"
typedef enum {
	INT_0,
	INT_1,
	INT_2
} INT;



void SetupInterrupt(INT id);