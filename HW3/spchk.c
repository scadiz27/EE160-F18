/*      File : spchk.c        *
 *      By   : Stephen Cadiz                *
 *      login: scadiz27    *
 *      team : hammahs         *
 *      Date : 10/28/18          */

/*
reads lines of Hawaiian text from a file
(using redirection, so you will not need to prompt), 
and lists each word found on a separate line 
indicating whether it is a valid Hawaiian spelling or it is invalid.

RULES:
All words contain only vowels and Hawaiian consonants.
All words end in a vowel.
Within a word, two consonants NEVER appear adjacent.
*/

#include <stdio.h>
#include "letters.h"

//#define DEBUG1
//#define DEBUG2
//#define DEBUG3
//#define DEBUG4

int main(){
    
    char ch; //Current character being read
    char oldch; //Character behind current character
    int inword; //Flag for if inside a word
    int word; //Flag for whether word is valid or not
    
    int tf; //True/false variables
    
    inword = FALSE; //Start with inWord false
    
    //Read file until there is no more characters
    while(ch!= EOF){
        word = TRUE; //Start with word true
        ch = getchar(); //Read character
        #ifdef DEBUG1
        printf("\t[1] Read character: %c\n", ch);
        #endif

        //If not in a word, and read a non-delimiter
        if(inword == FALSE && !delimitp(ch)){
            
            //You entered a word
            inword = TRUE; 
            
            //Cycle through word until delimiter
            do{
                
                tf=is_vowel(ch);
                //If character is not a hawaiian vowel, spelling is wrong
                if(tf=FALSE){
                    word = FALSE;
                }
                
                tf=is_h_consonant(ch);
                //If character is not a hawaiian consonant, spelling is wrong
                if(tf=FALSE){
                    word = FALSE;
                }
                
                putchar(ch); //Print current character
                oldch = ch; //Store character (to test)
                ch = getchar(); //Read next character
                if(oldch == ch){ //Test new character against old
                    word = FALSE; //If they are the same, invalid spelling
                }
                
            } while (!delimitp(ch) && ch != EOF);
        }
        
        //Here, last character in word is stored in oldch
        //ch contains delimiter
        
        tf=is_h_consonant(oldch);
            if(tf==TRUE){
                word = FALSE; //Last character cannot be consonant
            }
         
        
        //If in a word, and read a delimiter
        if(inword && delimitp(ch)){ 
            
            //No longer in a word
            inword = FALSE;
            
            //Print results of previous word
            if(word == TRUE){
                printf("\tValid spelling\n");
            } else {
                printf("\tInvalid spelling\n");
            }
        }
        
        //Print result for final word
        if(ch == EOF){
            if(word == TRUE){
                printf("\tValid spelling\n");
            } else {
                printf("\tInvalid spelling\n");
            }
        }
    }
    return 0;
}

