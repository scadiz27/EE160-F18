/*      File : exponent.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/* Given: float base and integer exponent
    Outputs: base raised to exponent */
    
#include "exponent.h"  
#include <stdio.h>

//#define DEBUG

float pos_power(float base, int exponent){
    float answer=base;
   if(exponent<0){
        return 0;
    }
    
    while(exponent>1){
        #ifdef DEBUG
            printf("[exponent.c]base:%.2f, exponent:%d\n", base,exponent);
        #endif
        answer*=base;
        exponent--;
    }
    return answer;
}

