/*      File : avg.c       *
 *      By   :  Stephen Cadiz     *
 *      login: scadiz27   *
 *      team : Hammahs        *
 *      Date : 11/8/18    */

/*
 * Compute average of its input values.
 */

#include <stdio.h>

#define DEBUG1

int main()
{
  int          next;               /* next input value */
  long         sum=0;                /* running total */
  unsigned int n=0;                  /* number of input values */
  int          result;             /* did we read another value? */
  double       avg;                /* average of input values */


    while((result=scanf("%d",&next)) == 1){ //Get input
        sum+=next; //Update running total
        n++; //Update number of inputs
        #ifdef DEBUG1
        printf("Result: %d\n", result);
        printf("Next: %d\n", next);
        #endif
    }
        //If bad input is read, show error
        if (result != EOF)
                printf("Warning: bad input after reading %u values\n", n);
        printf("Average of %u values is %f.\n",
               n, (n == 0) ? 0.0 : (double) sum / n); //Print inputs
  
}