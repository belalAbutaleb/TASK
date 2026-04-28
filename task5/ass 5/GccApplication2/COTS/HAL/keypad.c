
/*
 * keypad.c
 *
 * Created: 4/27/2026 5:45:32 PM
 *  Author: Belal
 */ 


#include "keypad.h"



void Keypad_Ins(){
	GPIO_setupPinDirection(Port_Of_Output, A , PIN_OUTPUT);
	GPIO_setupPinDirection(Port_Of_Output, B , PIN_OUTPUT);
	GPIO_setupPinDirection(Port_Of_Output, C , PIN_OUTPUT);
	GPIO_setupPinDirection(Port_Of_Output, D , PIN_OUTPUT);
	
	GPIO_setupPinDirection(Port_Of_Input, input_1 , PIN_INPUT);
	GPIO_setupPinDirection(Port_Of_Input, input_2 , PIN_INPUT);
	GPIO_setupPinDirection(Port_Of_Input, input_3 , PIN_INPUT);
}




bool Keypad_Function(int* x){
	for(int i = 0;i<4;i++){
		GPIO_writePin(Port_Of_Output,i,LOGIC_HIGH);
		
		for(int j = 0;j<3;j++){
			bool int1 = GPIO_readPin(Port_Of_Input,j);

			if(int1){
				*x = (i*3)+j+1;
				
				while(int1){
					int1 = GPIO_readPin(Port_Of_Input,j);
				}
				GPIO_writePin(Port_Of_Output,A+i,LOGIC_LOW);
				
				return true;
			}
		}
		GPIO_writePin(Port_Of_Output,A+i,LOGIC_LOW);
	}
}


char Return_char(int x){
	switch(x){
		case 1:{
			return '1';
			break;
		}case 2:{
			return '2';
			break;
		}case 3:{
			return '3';
			break;
		}case 4:{
			return '4';
			break;
		}case 5:{
			return '5';
			break;
		}case 6:{
			return '6';
			break;
		}case 7:{
			return '7';
			break;
		}case 8:{
			return '8';
			break;
		}case 9:{
			return '9';
			break;
		
		}case 10:{
			return '*';
			break;
		}case 11:{
			return '0';
			break;
		}case 12:{
			return '#';
			break;
		}
			
	}
}
