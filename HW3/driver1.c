/*      File : driver1.c        *
 *      By   : Stephen Cadiz                *
 *      login: scadiz27    *
 *      team : hammahs         *
 *      Date : 10/28/18          */

/*
driver to test is_vowel and is_h_consonant functions
 */
 
 #include <stdio.h>
 #include "letters.h"
 
 
int main(){
    char input;
    
    printf("Enter a character ");
    printf("to test if it is a Hawaiian consonant or vowel:\n");
    scanf(" %c", &input);
    
    if(is_vowel(input)==1){
        printf("%c is a Hawaiian vowel.\n", input);
        return 0;
    }
    
    if(is_h_consonant(input)==1){
        printf("%c is a Hawaiian consonant.\n", input);
        return 0;
    }
    
    printf("%c is not a Hawaiian consonant or vowel.\n", input);
    
}
