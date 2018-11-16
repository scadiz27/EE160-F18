/*      File : swap.c           *
 *      By   : Stephen Cadiz           *
 *      login: scadiz27    *
 *      team : Hammahs      *
 *      Date : 11/22/18     */

/*
 *  A function to swap floarting point values using pointers.
 */

#include <stdio.h>
#include "swap.h"


//#define DEBUG
#define DEBUG1

 	float a;
	float b;
	float c;

/* 
given three pointers to floats and reorders the
values pointed to into ascending order.
*/

void reorder(float *x, float *y, float*z){
	
	#ifdef DEBUG1
	printf("\tEntering swap() with\n");
	printf("\t\ta is address = %x, contents %f\n", a, *x);
	printf("\t\tb is address = %x, contents %f\n", b, *y);
	printf("\t\tc is address = %x, contents %f\n", c, *z);
	#endif
	
	//If all are equal
    if(a == b && a == c && b == c){
    return 0;
    }
    
    //Loop until proper order
    while (a>=b || b>=c || a>=c){
    	if (a >= b){
        	swap(&a, &b);
    	}
    	if (b >= c){
        	swap(&b, &c);
    	}
    }
    
}


/*
 *given two pointers to floats and swaps the values in the cells 
 pointed to such that the value pointed to by the first is less than
 (or equal to) the value pointed to by the second
 */
 

 
void swap_big(float *x, float *y){

	if(a>=b){
		swap(&a,&b);
	}
}


void swap( float *x, float *y)
/* Given: pointers to two floating point variables
   Returns: nothing directly, swaps values at the two adresses given
 */
{
   float temp;

	#ifdef DEBUG
	printf("\tEntering swap() with\n");
	printf("\t\tx is address = %x, contents %f\n", x, *x);
	printf("\t\ty is address = %x, contents %f\n", y, *y);
	#endif

	/* save first value  */
	temp = *x;

	/* move second value to first  */
	*x = *y;

	/* restore first value to second */
	*y = temp;

	#ifdef DEBUG
	printf("\tExiting sawp() with\n");
	printf("\t\tx is address = %x, contents %f\n", x, *x);
	printf("\t\ty is address = %x, contents %f\n", y, *y);
	#endif

}