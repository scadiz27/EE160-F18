/*      File : grader.h         *
 *      By   : Stephen Cadiz        *
 *      login: scadiz27     *
 *      team :  Hammahs     *
 *      Date : 11/01/2018      */

/*  Header file for grader.c  */


//Given a score in integer form, assigns a letter grade
char assign_grade(int score);

//Given a score scale and score, assign letter grade
char assign_grade2(int A, int B, int C, int D, int score);

//Check if grading scale is valid
int validScale(int A, int B, int C, int D);