/*      File : averager.c       *
 *      By   :  Stephen Cadiz     *
 *      login: scadiz27   *
 *      team : Hammahs        *
 *      Date : 11/8/18    */

/*
 * Read in a number of values to read and then print the average
 * of those values.
 */

#include <stdio.h>

int main()
{
  int expected=0;
  int flag=0; //Flag that invalid input is entered
  int count;
  double sum;
  int value;
  char c; //To cycle through input

        while (expected != EOF && value != EOF)
        {   
            if((scanf("%d", &expected)) != 1){
                printf("Error! Can't read number of expected values.\n");
                flag=1; //invalid input
                break; //Quit if expected values
            }
                sum = 0;
            if(flag==0){
                for (count = 0; count < expected; count++)
                {                        
                    if((scanf("%d", &value)) ==1){
                    sum += value;
                    }
                    else {
                    
                    //Invalid input detected
                    printf("Error! Can't read expected value #%d.\n",(count+1));
                        //Cycle through until end of line
                        while((c=getchar()!='\n'));
                        //Trip invalid input flag
                        flag=1;
                        break;
                    }
                }
            }
                
                //If flag isn't tripped, return average
                if(flag==0){
                printf("Average of %d values is %.2f\n",
                       count, count != 0 ? sum / count : 0.0);
                }
            flag=0; //Reset flag

                
        }
  
}