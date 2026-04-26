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

#include <util/delay.h>


int main(void)
{
    Button_init();   
    enable_pull_up();
	LEDS_init();
	LED_ID LEDarray[3]= {LED_GREEN,LED_YELLOW,LED_RED};

    while (1) {
		for (int i =0;i<3;i++){
			for (int j=0;j<200;j++){
				if (!button_state()) {
					LED_on(LEDarray[i]);
					_delay_ms(10);
				
					
				 } else {
					LED_off(LED_RED);
					LED_off(LED_YELLOW);
					LED_off(LED_GREEN);
					_delay_ms(10000);
				}
			}
			LED_off(LEDarray[i]);
			

		}
		
    }
}

