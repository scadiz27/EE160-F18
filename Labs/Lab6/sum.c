/*      File : sum.c            *
 *      By   :  Stephen Cadiz                *
 *      login: scadiz27                 *
 *      team : Hammahs                 *
 *      Date : 10/09/2018                 */

/*  A program to compute the sum of numbers given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
        int input=0;
        int sum=0;

        /*  Get the first input            */
        printf("Enter an integer value:\n");
        scanf("%d", &input);

        /*  While there is more input      */
        while(input!=EOF){

                /*  Accumulate the sum     */
                sum+=input;

                /*  Get the next input     */
                printf("Enter an integer value:\n");
                scanf("%d", &input);
                //Debugging
                //printf("[[Input: %d]]\n", input);
        }        
        /*  Print the results              */
        printf("Sum=%d\n",sum);

}
