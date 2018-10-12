/*      File : driver2.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/* Enter a list of numbers (floats) and get the max/min of them*/
/* To compile :  cc driver2.c maxxmin.c */

#include "maxmin.h"
#include <stdio.h>

int main(){
    float initial, input, maximum, minimum;
    
    //Prompt for initial input
    printf("Enter a number:\n");
    scanf("%f", &initial);
    
    //Store first input as both  maximum and minimum
    maximum=initial;
    minimum=initial;
    
    do{ //Loop to accept more inputs
        printf("Enter a number:\n");
        scanf("%f", &input);
        
        //Pass established maximum and input into max()
        //Update maximum if a higher number is entered
        maximum=max(maximum,input);
        
        //Pass established minimum and input into min()
        //Update minimum is a lower number is entered
        minimum=min(minimum,input);
        
        

    } while (input!=EOF); //Loop until EOF is entered
    
    //Print results
    printf("Maximum: %.2f\n", maximum);
    printf("Minimum: %.2f\n", minimum);
}