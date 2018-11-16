/*      File : driver1.c           *
 *      By   : Stephen Cadiz           *
 *      login: scadiz27    *
 *      team : Hammahs      *
 *      Date : 11/22/18     */

/*
 *  A function to test swap_big()
 */
 
#include "swap.h"
#include <stdio.h>

    float a, b;

int main(){
    

    
    while(a!=EOF || b!=EOF ){
        //scanf("%f %f",&a, &b);
        scanf("%f",&a);
        if(a==EOF){
            break;
        }
        scanf("%f",&b);
        if(b==EOF){
            break;
        }
        printf("Entering swap_big with a=%.3f, b=%.3f\n",a,b);
        swap_big(&a,&b);
        printf("Exiting swap_big with a=%.3f <= b=%.3f\n\n",a,b);
    }
}