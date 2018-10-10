/*      File : account.c            *
 *      By   :  Stephen Cadiz                *
 *      login: scadiz27                 *
 *      team : Hammahs                 *
 *      Date : 10/09/2018                 */

/*  A program that prints the accumulated value of an initial investment compounded annually, monthly, or yearly */


#include <stdio.h>

/* a function that returns the accumulated value given the amount, interest, type of interest, and years
*/

float calc_acc_amt(float acc_amount, float annual_interest, int years);

int main(){
    
    //Initialize variables
    float accAmt, intRate;
    int years, type;
    
    //Prompt user for initial input
    printf("Enter the initial account value,\ninterest rate (in decimal),\ntype of compounding [1: Annual, 2: Monthly, 3: Daily],\nlength of compounding\n");

    scanf("%f %f %d %d", &accAmt, &intRate, &type, &years);
    
    //Check for errors in type
    if(type!=1 || type !=2 || type !=3){
        printf("Invalid compounding type\n");
        return 0;
    }
    
    //while loop to accept new values until exited (By entering 0 for inital ammount)
    while(1){
        //Print results
        //If Annual compounding
        if(type==1){
            printf("\nIn %d years,\nat an interest rate of %%%.2f (compounded annually),\n$%.2f will be worth $%.2f.\n\nEnter another initial value, interest rate, type of compounding, and number of years\n", years, intRate*100, accAmt, calc_acc_amt(accAmt,intRate,years));
        }
        
        //If Monthly compounding (convert interest, and years)
        if(type==2){
            printf("\nIn %d years,\nat an interest rate of %%%.2f (compounded monthly),\n$%.2f will be worth $%.2f.\n\nEnter another initial value, interest rate, type of compounding and number of years\n", years, intRate*100, accAmt, calc_acc_amt(accAmt,intRate/12,years*12));
        }
        
        //if Daily compounding (convert interest, and years)
        if(type==3){
            printf("\nIn %d years,\nat an interest rate of %%%.2f (compounded daily),\n$%.2f will be worth $%.2f.\n\nEnter another initial value, interest rate, type of compounding and number of years\n", years, intRate*100, accAmt, calc_acc_amt(accAmt,intRate/365,years*365));
        }
        
        
        //Check for more input or EOF
        scanf("%f",&accAmt);
        if(accAmt==EOF){
            return 0;
        }
        scanf("%f %d %d", &intRate, &type, &years);
        
        //Check for invalid type
        if(type!=1 || type !=2 || type !=3){
            printf("Invalid compounding type\n");
            return 0;
        }
    }
}

float calc_acc_amt(float acc_amount, float annual_interest, int years){
    //Loop to compound per year (until years run out)
    while(years>0){
        
        //Calculate accumulated amount
        acc_amount = acc_amount + acc_amount * annual_interest;
        years--;
    }
    return acc_amount;
}
