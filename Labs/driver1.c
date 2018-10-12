/*      File : driver1.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/* Enter two floats and get the maximum and minimum of them*/
/* To compile :  cc driver1.c maxxmin.c */

#include "maxmin.h"
#include <stdio.h>

int main(){
    float n1, n2;
    
    //Loop until EOF is entered
    while(1){
        printf("Enter a pair of floats\n");
        scanf("%f", &n1);
        if(n1==EOF){
            return 0;
        }
        scanf("%f", &n2);
        if(n2==EOF){
            return 0;
        }
        
        //Print results
        printf("Maximum: %.2f\n", max(n1,n2));
        printf("Minimum: %.2f\n", min(n1,n2));
    }
}