/*      File : grader.c         *
 *      By   : Stephen Cadiz        *
 *      login: scadiz27     *
 *      team :  Hammahs     *
 *      Date : 11/01/2018      */

/*  A program to assign letter grades to scores 
*/

#include <stdio.h>
#include "grader.h"

//If given scale, Check if grading scale is valid (1 = valid 0 =invalid)
int validScale(int A, int B, int C, int D){
            
    //Check A (less than 100 inclusive, greater than B C D)
    if(A>100 || A<=B || A<=C || A<=D){
        printf("%d %d %d %d\nInvalid grading scale.\n",A,B,C,D);
        return 0; //invalid scale
    }
    
    //Check B (less than A and greater than all others)
    if(B>=A || B<=C || B<=D){
        printf("%d %d %d %d\nInvalid grading scale.\n",A,B,C,D);
        return 0; //invalid scale
    }
    
    //Check C (less than B and A and greater than all others)
    if(C>=B || C>=A || C<=D){
        printf("%d %d %d %d\nInvalid grading scale.\n",A,B,C,D);
        return 0; //invalid scale
    }
    
    //Check D (less than all others and greater than 0)
    if(D>=A || D>=B || D>=C || D<0){
        printf("%d %d %d %d\nInvalid grading scale.\n",A,B,C,D);
        return 0; //invalid scale
    }
    
    //It is a valid scale if none of the above are tripped
    return 1;
}

//Given an integer score and grade scale, assign a letter grade to it
char assign_grade2(int A, int B, int C, int D, int score)
{
    //A range
    if(score>=A){
        return 'A';
    }
    //B range
    if(score>=B && score<A){
        return 'B';
    }
    //C range
    if(score>=C && score<B){
        return 'C';
    }
    //D range
    if(score>=D && score<C){
        return 'D';
    }
    
    //Anything less, return F
    return 'F';
}

//Given an integer score, assign a letter grade to it
char assign_grade(int score)
{
    //A range: 100 to 90
    if(score<=100 && score>=90){
        return 'A';
    }
    //B range: 89 to 80
    if(score<=89 && score>=80){
        return 'B';
    }
    //C range: 79 to 70
    if(score<=79 && score>=70){
        return 'C';
    }
    //D range: 69 to 60
    if(score<=69 && score>=60){
        return 'D';
    }
    //F range: 59 to 0
    if(score<=59 && score>=0){
        return 'F';
    }
    
    //If it is an invalid score (greater than 100 or less than 0 inclusive)
    return '?';
       
}