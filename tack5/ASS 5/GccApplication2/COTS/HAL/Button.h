/*
 * Button.h
 *
 * Created: 10/02/2026 21:00:30
 *  Author: maria
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../LIB/BIT_MATH.h"
#include "../MCAL/GPIO.h"
#include<avr/io.h>

#define button1_portx   PORTA
#define button1_portx_num 0
#define button1_ddrx    DDRA
#define button1_pinx     0
#define button1_pin_id  PINA

void Button_init(void);
void enable_pull_up(void);
uint8 button_state();

#endif /* BUTTON_H_ */