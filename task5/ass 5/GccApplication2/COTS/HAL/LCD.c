
/*
 * LCD.c
 *
 * Created: 4/27/2026 3:10:07 AM
 *  Author: Belal
 */ 
#include "LCD.h"
bool stillins = true;

void LCD_ins(){
	GPIO_setupPortDirection(2,PORT_OUTPUT);
	_delay_ms(4000);
	Sendinstruction(0b00110010);
	_delay_ms(20);
	Sendinstruction(0b00101000);
	_delay_ms(20);
	Sendinstruction(0b00001100);
	_delay_ms(20);
	Sendinstruction(0b00000001);
	_delay_ms(20);
	
	

	
	
	
	stillins = false;
}

void Sendinstruction(uint8 id){
	GPIO_writePin(2,RS,LOGIC_LOW);
	GPIO_writePin(2,RW,LOGIC_LOW);
	
	
	GPIO_writePin(2,D4,GET_BIT(id,4));
	GPIO_writePin(2,D5,GET_BIT(id,5));
	GPIO_writePin(2,D6,GET_BIT(id,6));
	GPIO_writePin(2,D7,GET_BIT(id,7));
	
	
	GPIO_writePin(2,E,LOGIC_HIGH);
	_delay_ms(10);
	GPIO_writePin(2,E,LOGIC_LOW);
	_delay_ms(10);
	
	

			GPIO_writePin(2,D4,GET_BIT(id,0));
			GPIO_writePin(2,D5,GET_BIT(id,1));
			GPIO_writePin(2,D6,GET_BIT(id,2));
			GPIO_writePin(2,D7,GET_BIT(id,3));
			
			
			
			GPIO_writePin(2,E,LOGIC_HIGH);
			_delay_ms(10);
			GPIO_writePin(2,E,LOGIC_LOW);
			_delay_ms(10);

	
	
	_delay_ms(20);
	
	
}

void SendData(uint8 id){
		GPIO_writePin(2,RS,LOGIC_HIGH);
		GPIO_writePin(2,RW,LOGIC_LOW);
		
		
		GPIO_writePin(2,D4,GET_BIT(id,4));
		GPIO_writePin(2,D5,GET_BIT(id,5));
		GPIO_writePin(2,D6,GET_BIT(id,6));
		GPIO_writePin(2,D7,GET_BIT(id,7));
		
		
		GPIO_writePin(2,E,LOGIC_HIGH);
		_delay_ms(10);
		GPIO_writePin(2,E,LOGIC_LOW);
		_delay_ms(10);
		
		
	
			GPIO_writePin(2,D4,GET_BIT(id,0));
			GPIO_writePin(2,D5,GET_BIT(id,1));
			GPIO_writePin(2,D6,GET_BIT(id,2));
			GPIO_writePin(2,D7,GET_BIT(id,3));
			
			
			
			GPIO_writePin(2,E,LOGIC_HIGH);
			_delay_ms(10);
			GPIO_writePin(2,E,LOGIC_LOW);
			_delay_ms(10);

		
		
		_delay_ms(20);
}