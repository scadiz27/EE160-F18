/*      File : avg.c            *
 *      By   :  Stephen Cadiz                *
 *      login: scadiz27                 *
 *      team : Hammahs                 *
 *      Date : 10/09/2018                 */

/*  A program to compute the averageof numbers given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
        int input, sum;
        int count=0;
        float avg;

        /*  Get the first input            */
        printf("Enter an integer value:\n");
        scanf("%d", &input);
        count++;
        /*  While there is more input      */
        while(input!=EOF){

                /*  Accumulate the sum     */
                sum+=input;

                /*  Get the next input     */
                printf("Enter an integer value:\n");
                scanf("%d", &input);
                
                
                //Increment number of inputs (don't count EOF)
                if(input!=EOF){
                    count++;
                }
                //Debugging
                //printf("[[Input: %d]]\n", input);
        }        
        /*  Print the results              */
        printf("Average of %d values is %f\n",count,(float)sum/count);

}
