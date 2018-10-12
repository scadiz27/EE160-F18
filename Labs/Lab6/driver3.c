/*      File : driver3.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/* Driver to accept input to pass to pos_power() function in exponent.c
*/


#include "exponent.h"
#include <stdio.h>

//#define DEBUG

int main(){
    float base;
    int exponent;
    float answer;
    
    while(base!=EOF && exponent!=EOF){
        printf("Enter a base and exponent:\n");
        scanf("%f", &base);
        scanf("%d",&exponent);
        #ifdef DEBUG
            printf("[Driver3] Base=%.2f, Exponent: %d\n", base, exponent);
        #endif
        answer=pos_power(base,exponent);
        printf("%.2f raised to the power of %d is %.2f\n\n", base, exponent, answer);
    }    
}
