/*      File : weight.c            *
 *      By   :  Stephen Cadiz                *
 *      login: scadiz27                 *
 *      team : Hammahs                 *
 *      Date : 10/09/2018                 */

/*  A program to compute the weighted average of numbers given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
        int input, sum=0, weight, weightSum=0;
        int count=0;

        /*  Get the first input            */
        printf("Enter an weight/value pair:\n");
        scanf("%d %d", &weight, &input);
        count++;
        /*  While there is more input      */
        while(input!=EOF){

                /*  Accumulate the sum, weight sum, and number of inputs    */
                sum+=input*weight;
                weightSum+=weight;
                /*  Get the next input     */
                printf("Enter an weight/value pair:\n");
                scanf("%d", &weight);
                //Exit loop if EOF entered
                if(weight==EOF){
                    break;
                }

                count++;
                //Debugging
                //printf("[[Input: %d]]\n", input);
        }        
        
        /*  Print the results              */
        //Debugging
        //printf("[sum=%d, weightSum=%d\n",sum,weightSum);
        printf("The weighted average of %d values is %f\n",count,(float)sum/weightSum);

}
