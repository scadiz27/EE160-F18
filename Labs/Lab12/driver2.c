/*      File : driver2.c           *
 *      By   : Stephen Cadiz           *
 *      login: scadiz27    *
 *      team : Hammahs      *
 *      Date : 11/22/18     */

/*
 *  A function to test reorder()
 */
 
#include "swap.h"
#include <stdio.h>

    float a, b, c;

int main(){
    

    
    while(a!=EOF || b!=EOF || c!=EOF ){
        //scanf("%f %f",&a, &b);
        scanf("%f",&a);
        if(a==EOF){
            break;
        }
        scanf("%f",&b);
        if(b==EOF){
            break;
        }
        scanf("%f",&c);
        if(c==EOF){
            break;
        }

        printf("Entering reorder with a=%.3f, b=%.3f, c=%.3f\n",a,b,c);
        reorder(&a,&b,&c);
        printf("Exiting reorder with a=%.3f, b=%.3f, c=%.3f\n\n",a,b,c);
    }
}