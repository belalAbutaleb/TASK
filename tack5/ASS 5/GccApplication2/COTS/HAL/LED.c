
/******************************************************************************
 *
 * Module: Led Driver
 *
 *
 *
 *
 *
 * Author: Mohamed Magdy
 *
 *******************************************************************************/
#include "LED.h"


void LEDS_init(void)
{
	/* Red */
	GPIO_setupPinDirection(RED_LED_PORT, RED_LED_PIN , PIN_OUTPUT);
	LED_off(LED_RED);

	GPIO_setupPinDirection(GREEN_LED_PORT, GREEN_LED_PIN , PIN_OUTPUT);
	LED_off(LED_GREEN);

	GPIO_setupPinDirection(YELLOW_LED_PORT, YELLOW_LED_PIN , PIN_OUTPUT);
	LED_off(LED_YELLOW);

}


void LED_on(LED_ID id)
{  switch (id) {
case LED_RED:
	GPIO_writePin(RED_LED_PORT, RED_LED_PIN,LOGIC_HIGH );
	break;
case LED_GREEN:
	GPIO_writePin(GREEN_LED_PORT, GREEN_LED_PIN,LOGIC_HIGH );
	break;
case LED_YELLOW:
	GPIO_writePin(YELLOW_LED_PORT, YELLOW_LED_PIN,LOGIC_HIGH );
	break;


}

}

void LED_off(LED_ID id)
{
	switch (id) {
	case LED_RED:
		GPIO_writePin(RED_LED_PORT, RED_LED_PIN,LOGIC_LOW);

		break;
	case LED_GREEN:
		GPIO_writePin(GREEN_LED_PORT, GREEN_LED_PIN,LOGIC_LOW);

		break;

	case LED_YELLOW:
		GPIO_writePin(YELLOW_LED_PORT, YELLOW_LED_PIN,LOGIC_LOW);

		break;


	}
}




