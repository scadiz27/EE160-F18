/* a program
*/
#include <stdio.h>
#include <stdlib.h>
    //Arrays to store wins[0], losses[1]
    int p1wld[1];
    int p2wld[1];
    
    //Variable to store draw count
    int draws=0;
    
    //Player input variables. 1=rock, 2=paper, 3=scissors
    int p1, p2;

    int i;

int main(){

    //Initialize both arrays to all 0s
    //int i;
    for(i=0;i<=1;i++){
        p1wld[i]=0;
        p2wld[i]=0;
    }

    //Loop until exit flag input (-1)
    while(1==1){

        printf("1=Rock, 2=Paper, 3=Scissors (-1 to exit).\n");
        
        //Prompt for player 1 input, store in p1
        printf("Player1: ");
        scanf("%d",&p1);
        
        //Check for player1 invalid input
        while(p1!=1 && p1!=2 && p1!=3 && p1!=EOF){
            printf("Invalid Player1 input\n");
            printf("Player1: ");
            scanf("%d",&p1);
        }
        
        //Exit if -1 entered
        if(p1==-1){
            break;
        }        
        
        //Prompt for player 2 input, store in p2
        printf("Player2: ");
        scanf("%d",&p2);
        
        //Check for invalid player2 input
        while(p2!=1 && p2!=2 && p2!=3 && p2!=EOF){
            printf("Invalid Player2 input\n");
            printf("Player2: ");
            scanf("%d",&p2);
        }
        
        //Exit if -1 entered
        if(p2==-1){
            break;
        }
        
        //Check player1 win scenarios
        //P1 Rock, P2 Scissors
        if(p1==1&&p2==3){
            p1wld[0]++; //Player 1 wins
            p2wld[1]++; //Player 2 loses
            printf("Player1 wins\n\n");
        }
        
        //P1 Paper, P2 Rock
        if(p1==2&&p2==1){
            p1wld[0]++;
            p2wld[1]++;
            printf("Player1 wins\n\n");
        }
        
        //P1 Scissors, P2 Paper
        if(p1==3&&p2==2){
            p1wld[0]++;
            p2wld[1]++;
            printf("Player2 wins\n\n");
        }
        
        //Check player2 win scenarios
        //P2 Rock, P1 Scissors
        if(p2==1&&p1==3){
            p2wld[0]++; //Player 2 wins
            p1wld[1]++; //Player 1 loses
            printf("Player2 wins\n\n");
        }
        
        //P2 Paper, P1 Rock
        if(p2==2&&p1==1){
            p2wld[0]++;
            p1wld[1]++;
            printf("Player2 wins\n\n");
        }
        
        //P2 Scissors, P1 Paper
        if(p2==3&&p1==2){
            p2wld[0]++; 
            p1wld[1]++; 
            printf("Player2 wins\n\n");
        }
        
        //Check draw scenarios
        if(p1==p2){
            draws++;
            printf("Draw!\n\n");
        }
    }
    
    //Print results
    printf("\nPlayer1 wins: %d\n", p1wld[0]);
    printf("Player1 losses: %d\n", p1wld[1]);
    printf("Player2 wins: %d\n", p2wld[0]);
    printf("Player2 losses: %d\n", p2wld[1]);
    printf("Draws: %d\n", draws);
    printf("Total number of matches: %d\n", p1wld[0]+p1wld[1]+draws);
}
