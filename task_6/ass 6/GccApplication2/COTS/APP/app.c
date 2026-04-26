/*
 * app.c
 *
 * Created: 10/02/2026 21:16:11
 *  Author: maria
 */ 


#include "avr/io.h"
#include "../HAL/Button.h"
#include "../HAL/LED.h"
#define F_CPU 16000000UL 
#include "../MCAL/GPIO.h"
#include "../HAL/interupt.h"

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
    Button_init();   
    enable_pull_up();
	LEDS_init();
	LED_ID LEDarray[3]= {LED_GREEN,LED_YELLOW,LED_RED};
	SetupInterrupt(INT_0);

    while (1) {
		for (int i =0;i<3;i++){
			for (int j=0;j<200;j++){
				
					LED_on(LEDarray[i]);
					_delay_ms(10);	
				 
			}
			LED_off(LEDarray[i]);
			

		}
		
    }
}

