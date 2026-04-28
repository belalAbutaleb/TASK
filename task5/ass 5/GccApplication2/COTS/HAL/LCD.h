
/*
 * LCD.h
 *
 * Created: 4/27/2026 3:09:45 AM
 *  Author: Belal
 */ 
#include <util/delay.h>
#include "../MCAL/GPIO.h"
#include "../lib/BIT_MATH.h"
#include "../LIB/std_types.h"
#include "avr/io.h"
#include <stdbool.h>
#include <stdint.h>
#define RS          0
#define RW          1
#define E           2
#define D4 4
#define D5 5
#define D6 6
#define D7 7

#define LCD_CLEAR_COMMAND                    0x01
#define LCD_GO_TO_HOME                       0x02
#define LCD_TWO_LINES_EIGHT_BITS_MODE        0x38
#define LCD_TWO_LINES_FOUR_BITS_MODE         0x28
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT1   0x33
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT2   0x32
#define LCD_CURSOR_OFF                       0x0C
#define LCD_CURSOR_ON                        0x0E
#define LCD_SET_CURSOR_LOCATION              0x80


void LCD_ins();


void Sendinstruction(uint8 id);

void SendData(uint8 id);