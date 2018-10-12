/*      File : driver2.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/*  A program to compare numbers*/

#include <stdio.h>
#define DEBUG

int main(){
    
    int input=1;
    int posSum=0, posCount=0;
    int negSum=0, negCount=0;
    int evenSum=0, evenCount=0;
    int oddSum=0, oddCount=0;
    int posEvenSum=0, posEvenCount=0;
    int negOddSum=0, negOddCount=0;
    int sum=0;
    
    do{
        //Prompt for input 
        printf("Enter a number (0 to end):\n");
        scanf("%d", &input);
        
        //Check if input if positive
        if(input>0){
            posSum+=input;
            posCount++;
            //Check if positive and even
            if(input%2==0){
                evenSum+=input;
                evenCount++;
                posEvenSum+=input;
                posEvenCount++;
                sum+=input;
            } 
            //Posiive and odd here
            else { 
                oddSum+=input;
                oddCount++;
                sum+=input;
            }
        } 
        //Negative here
        else {
            negSum+=input;
            negCount++;
            //Check if negative and even
            if(input%2 == 0){
                evenSum+=input;
                evenCount++;
                sum+=input;
            } 
            //Negative and odd here
            else {
                oddSum+=input;
                oddCount++;
                negOddSum+=input;
                negOddCount++;
                sum+=input;
            }
        }
    } while(input!=0); //Loop until 0 is entered
    
    
    //Display results
    printf("\n%d positive numbers totalling %d\n",posCount,posSum);
    printf("%d negative numbers totalling %d\n",negCount,negSum);
    printf("%d even numbers totalling %d\n",evenCount,evenSum);
    printf("%d odd numbers totalling %d\n",oddCount,oddSum);
    printf("%d positive even numbers totalling %d\n",posEvenCount,posEvenSum);
    printf("%d negative odd numbers totalling %d\n",negOddCount,negOddSum);
    printf("%d total numbers totalling %d\n",posCount+negCount,sum);                
        
    
    
    
}