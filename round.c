/*  file:    round.c
    by:      Stephen Cadiz
    login:   scadiz27
    date:    9/22/18
    team:    hammahs
    members: Sean Flynn, Micah Tumpap
*/

 /****************************************
 * Needs to be compiled with g++ NOT gcc *
 *                                       *
 ****************************************/


#include <stdio.h>
#include <math.h>

int round_to_int(float value);
/*  Given: a positive float value
*   Returns: the value rounded to the nearest integer (rounding up)
*/

int main(){
    
    float input=1;
    int flag = 1;
    
    //Prompt user for initial input
    printf("Please enter a float value to round up:\n");
    scanf("%f", &input);

    //Loop to accept inputs until exit
    while(input != 0){
        
        //Print answer
        printf("%.2f rounded to the next highest integer: %d\n\n", input, round_to_int(input));
    
        //Prompt for more inputs, or to exit
        printf("Enter another float value, or 0 to exit:\n");
        scanf("%f", &input);
    }

}


int round_to_int(float value){
    //printf("Debug 1: In round_to_int\n");
    int rounded;
    
    //Roudning positive floats
    if(value > 0){
        rounded = ceil(value);
        return rounded;
    }
    
    //Rounding negative floats
    if (value < 0){
        value *= -1;
        rounded = floor(value);
        rounded *= -1;
        return rounded;
    }
}
