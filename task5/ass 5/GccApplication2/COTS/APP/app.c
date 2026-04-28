/*
 * app.c
 *
 * Created: 10/02/2026 21:16:11
 *  Author: belya
 */ 


#include "avr/io.h"
#include "../HAL/Button.h"
#include "../HAL/LED.h"
#define F_CPU 16000000UL 
#include "../MCAL/GPIO.h"
#include "../HAL/interupt.h"
#include "../HAL/LCD.h"
#include "../HAL/keypad.h"

#include <util/delay.h>
#include <avr/interrupt.h>
void AllLedOff(){
	LED_off(LED_RED);
	LED_off(LED_YELLOW);
	LED_off(LED_GREEN);
}

ISR(INT0_vect){
	AllLedOff();
	_delay_ms(1000);
	
}




int main(void)
{
   LCD_ins();
   Keypad_Ins();
   Button_init();
   int x;
  
while(1){
	if(!button_state()){
		bool clicked = Keypad_Function(&x);
		if(clicked){
		char ch = Return_char(x);
		SendData(ch);
		clicked = false;
		 }
		 
	}else{
		Sendinstruction(0b00000001);
	}
   }
	

   
}

