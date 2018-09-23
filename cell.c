/*  file:    cell.c
    by:      Stephen Cadiz
    login:   scadiz27
    date:    9/22/18
    team:    hammahs
    members: Sean Flynn, Micah Tumpap
*/

#include <stdio.h>

/*  This program calculates the cost of extra minutes for two cell phone plans
    Data should be redirected from a .dat file. 
    Format: Minutes Seconds (in column form)
    
    Jog: carges you $0.05 per minute for each excess minute. 
    However, they calculate your excess minutes by rounding each call to the 
    nearest minute and adding up the total. 

    Holo-T: charges you $0.07 per excess minute. 
    However, they caclulate your excess minutes by adding the total of all 
    your excess calls, and then rounding the total to the nearest minute. 
*/
int main(){
    
    int min, sec, minJ, minH, minTotJ=0, minTotH=0, secTotH=0;
    float JOG = 0.05;   //Cost of Jog extra mins
    float HOLO = 0.07;  //Cost of Holo-T extra mins
    float jogCost, holoCost;
    
    
    while(scanf("%d %d",&min, &sec) != EOF){
        
        //Round to nearest minute for Jog
        if(sec>=30){
            minJ = min+1;
        } else {
            minJ = min;
        }
        
        //Update Jog minutes total
        minTotJ += minJ;
        
        //Update Holo minutes total
        minTotH += min;
        
        //Update Holo seconds total
        secTotH += sec;
        
        //Debugging
        //printf("Min:%d Sec:%d\n", min, sec);
    }
    
    //Calculate jog Cost
    jogCost = minTotJ * JOG;
    
    //Convert Holo seconds to minutes, add to total Holo mins
    int min1 = secTotH / 60;
    minTotH += min1;
    
    //If seconds didn't divide evenly, add round minutes up
    if(secTotH%60 != 0){
        minTotH++;
    }
    
    //Calculate Holo cost
    holoCost = minTotH * HOLO;
    
    //Print Results
    printf("Jog will charge $%.2f for %d.00 extra minutes\n", jogCost, minTotJ);
    printf("Holo will charge $%.2f for %d.00 extra minutes\n"
        ,holoCost, minTotH);
}

