
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
#ifndef LED_H_
#define LED_H_

#include "../LIB/BIT_MATH.h"
#include "../MCAL/GPIO.h"
#include<avr/io.h>
#include "../MCAL/gpio.h"

typedef enum {
    LED_RED,
    LED_GREEN,
    LED_YELLOW
} LED_ID;
/* ==== User Configuration ==== */
/*PORT A ----> 0
  PORT B ----> 1
  PORT C ----> 2
  PORT D ----> 3

*/
#define RED_LED_PORT   3
#define RED_LED_PIN    2
#define RED_LED_LOGIC  POSITIVE_LOGIC

#define GREEN_LED_PORT   3
#define GREEN_LED_PIN    0
#define GREEN_LED_LOGIC  POSITIVE_LOGIC


#define YELLOW_LED_PORT   3
#define YELLOW_LED_PIN    5
#define YELLOW_LED_LOGIC  POSITIVE_LOGIC

#define POSITIVE_LOGIC  0
#define NEGATIVE_LOGIC  1

void LEDS_init(void);
void LED_on(LED_ID);
void LED_off(LED_ID);


#endif /* LED_H_ */
