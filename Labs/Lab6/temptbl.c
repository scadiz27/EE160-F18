/*      File : temptbl.c            *
 *      By   :  Stephen Cadiz                *
 *      login: scadiz27                 *
 *      team : Hammahs                 *
 *      Date : 10/09/2018                 */

/*  A program to compute a temperature table of celcius and fahrenheit*/

#include <stdio.h>

        float tocelsius(float fahrenheit);
         /*  Given:  a temperature reading in degrees Fahrenheit
             Returns: the temperature in degrees Celsius
          */
        int temptable(float start, float stop, float step);
         /*  Given: starting and ending temperatures in degrees Fahrenheit
                    and a step size.
             
             The function prints a table of conversions from degrees
             Fahrenheit to degrees Celsius from start to at most stop
             in "step" degree F increments, one conversion per line.

             Returns: the number of table lines printed.
           */

int main(){

        //Declare variables
        float start, stop, step;

        //Prompt user for input
        printf("Enter start, stop and step:\n");
        scanf("%f %f %f", &start, &stop, &step);
        
        //Check if step is too small
        if(step<0){
            step*=-1;
        }
        
        if(step<=0.001){
            printf("No table -- step smaller than 0.001!\n");
            return 0;
        }
        
        //Loop to recieve more input, or terminate with EOF
        while(1){
                //Display degrees Celsius;
                printf("Computed %d temperatures\n", temptable(start,stop,step));
                printf("Enter start, stop and step:\n");
                
                //Break loop if EOF is entered
                scanf("%f",&start);
                if(start==EOF){
                    return 0;
                }
                
                scanf("%f %f",&stop,&step);
                
                //Check if step is too small
                if(step<0){
                    step*=-1;
                }
                if(step<=0.001){
                    printf("No table -- step smaller than 0.001!\n");
                    return 0;
                }
        }
}

float tocelsius(float degF){

        float degC;
        degF = degF - 32;
        degC = degF * 5 / 9;
        return degC;
}

int temptable(float start, float stop, float step){
        int counter=0;
        
        //Table heading
        printf("\nFahrenheit\tCelsius\n");
        
        //Convert step to positive
        if(step<0){
            step*=-1;
        }
        
        //If start is greater than stop, minus step
        if(start>stop){
            //Loop until values are within step of each other
            while(start>=stop){
                    printf("%.2f\t%.2f\n",start,tocelsius(start));
                    start-=step;
                    counter++;
            }
            return counter;
        }
        
        //If start is less than stop, add step
        if(start<stop){
            //Loop until values are within step of each other
            while(start<=stop){
                    printf("%.2f\t%.2f\n",start,tocelsius(start));
                    start+=step;
                    counter++;
            }
            return counter; 
        }
        

}
