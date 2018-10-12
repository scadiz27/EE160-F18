/*      File : maxmin.c           *
 *      By   : Stephen Cadiz  *
 *      login: scadiz27 *
 *      team : hammahs *
 *      Date : 10/11/18 */

/*  Functions that return either the maximum or minimum of two float inputs*/

#include "maxmin.h"
#include <stdio.h>

float max(float n1, float n2){
    if(n1>n2){
        return n1;
    } else {
        return n2;
    }
}

float min(float n1, float n2){
    if(n1>n2){
        return n2;
    } else {
        return n1;
    }
}