#include <stdio.h>
int Setbit(int integer,int bit_pos){
    int answer ;
    answer = integer | (1<< bit_pos)
    return answer;


}
// this is made by belya :)
int clearbit (int x, int pos){
    int answer;
    answer = x &~(1<<pos);
    return answer;
}
int toggelePin (int integer,int bit_pos){
    int new_value ; 
    new_value = integer & ~(1 << bit_pos);
    if (integer = new_value){
        new_value = Setbit(integer ,bit_pos);
        
    }else{
        new_value = clearbit(integer ,bit_pos);
    }
    return new_value;
}

int  main (){
    int number = 9;
    int bit_position = 2;
    int x = toggelePin (number,bit_position);
    printf("new number is ");
    printf(x);
    return 0 ;
}