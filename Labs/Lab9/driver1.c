/*      File : driver1.c         *
 *      By   : Stephen Cadiz        *
 *      login: scadiz27     *
 *      team :  Hammahs     *
 *      Date : 11/01/2018      */

/*  A driver for grader.c  */

#include <stdio.h>
#include "grader.h"

int main()
{
    //Declare variables
    int score;
    char grade;
        
        //While there are more scores left to read in .dat file
       while(scanf("%d", &score) == 1)
       {     
           //Check if it is a valid grade (between 100 and 0 inclusive)
           if(score>100 || score < 0){
               printf("%d: illegal score\n", score);
           } else {
              printf("%d: ", score); //Print number grade
              grade = assign_grade(score); //Assign letter grade
              printf("%c\n", grade); // Print letter grade
           }
       }
       
}