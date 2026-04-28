
/*
 * keypad.h
 *
 * Created: 4/27/2026 5:45:14 PM
 *  Author: Belal
 */ 
#include <util/delay.h>
#include "../MCAL/GPIO.h"
#include "../lib/BIT_MATH.h"
#include "../LIB/std_types.h"
#include "avr/io.h"
#include <stdbool.h>
#include <stdint.h>


#define Port_Of_Output   3
#define Port_Of_Input  0


#define A   0
#define B	1
#define C   2
#define D   3


#define input_1   0
#define input_2   1
#define input_3   2


void Keypad_Ins();

bool Keypad_Function(int* x);

char Return_char(int x);
