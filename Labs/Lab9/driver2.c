/*      File : driver2.c         *
 *      By   : Stephen Cadiz        *
 *      login: scadiz27     *
 *      team :  Hammahs     *
 *      Date : 11/01/2018      */

/*  A driver for grader2.c  */

#include <stdio.h>
#include "grader.h"

int main()
{
    //Declare variables
    int score;
    char grade;
    //Variables to score grading scale
    int A, B, C, D;
    //Variables to store number of each grade
    int Act=0, Bct=0, Cct=0, Dct=0, Fct=0, illegalct=0;
        
    //Scan grading scale (minimum for each grade)
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    //Check if grading score is reasonable
    if(validScale(A,B,C,D) == 0){
        return 0;
    }

    //Now ready to scan scores
    //While there are more scores left to read in .dat file
    while(scanf("%d", &score) == 1)
    {
        //Check if it is a valid grade (between 100 and 0 inclusive)
        if(score>100 || score < 0){
            printf("%d: illegal score\n", score);
            illegalct++;
        } else {
            printf("%d: ", score); //Print number grade
            
            //Assign letter grade and count each grade
            grade = assign_grade2(A,B,C,D,score); 
            if(grade=='A')
                Act++;
            if(grade=='B')
                Bct++;
            if(grade=='C')
                Cct++;
            if(grade=='D')
                Dct++;
            if(grade=='F')
                Fct++;
            printf("%c\n", grade); // Print letter grade
        }
    }
   
    //Print total number passing/failing scores
    printf("Passing scores: %d\n",Act+Cct+Bct);
    printf("Failing scores: %d\n",Dct+Fct);
    printf("Illegal scores: %d\n", illegalct);
   
       
}