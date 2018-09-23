/*  file:    regress.c
    by:      Stephen Cadiz
    login:   scadiz27
    date:    9/22/18
    team:    hammahs
    members: Sean Flynn, Micah Tumpap
*/


/*
    This code takes a data file of x and y points
    and performs linear regression.
    
    It then outputs a matlab code to produce a graph
    
    To run:
    ./a.out < temps.dat > graph.m
*/

#include <stdio.h>

int main(){
    
    int x, y, xF, xL;
    float m, b;
    int counter=0, n=0;
    float xSum=0, ySum=0, xySum=0, xxSum=0;
    
    //Print first part of matlab code line 1
    printf("p = [\t");
    
    //Scan data file
    while(scanf("%d %d", &x, &y) != EOF){
        //Debugging
        //printf("x=%d, y=%d\n", x, y);
        
        //Print second part of matlab code line 1 (y data)
        printf("%d.00,\t", y);
        
        //Track total number of entries
        n++;
        
        //Save first x input
        if(n==1){
            xF=x;
        }

        //Summation of x
        xSum += x;
        
        //Summation of y
        ySum += y;
    
        //Summation of x*y
        xySum += x*y;
        
        //Summation of x^2
        xxSum += x*x;
    }
    
    //Save last x input
    xL=x;
    
    //Delete last tab and comma, add end of matlab code line 1
    printf("\b\b];\n");
    
    //Debugging
    //printf("n=%d\n",n);
    
    //Calculate m
    m = ((xSum*ySum) - (n*xySum)) / ((xSum*xSum) - (n*xxSum));
    
    //Calculate b
    b = ((xSum*xySum) - (xxSum*ySum)) / ((xSum*xSum) - (n*xxSum));
    
    //Debugging
    //printf("m=%f, b=%f", m, b);
    
    //Print matlab code line 2
    printf("x = linspace(\t %d.00,\t%d.00, %d);\n", xF, xL, xL+1);

    //Print matlab code line 3
    printf("y =\t%.2f * x +\t%.2f\n", m, b);
    
    //Print matlab code line 4
    printf("plot(x, y ,x ,p, 'go')\n");
    
    //Print matlab code line 5
    printf("text(0.5,100,'y = %.2f * x +\t%.2f');\n", m, b);

}
