/*      File : letters.c        *
 *      By   : Stephen Cadiz                *
 *      login: scadiz27    *
 *      team : hammahs         *
 *      Date : 10/28/18          */


/*
Given: a character
Return: 1 if a valid hawaiian vowel, 0 if invalid
Valid Hawaiian vowels:
A/a(65/97), E/e(69/101), I/i(73/105) O/o(79/111) U/u(85/117)
 */
 
 #include "letters.h"


int is_vowel(char input){
    if(input == 65 || input == 97){
        return TRUE;
    }
    if(input == 69 || input == 101){
        return TRUE;
    }
    if(input == 73 || input == 105){
        return TRUE;
    }
    if(input == 79 || input == 111){
        return TRUE;
    }
    if(input == 85 || input == 117){
        return TRUE;
    }
    
    //Not a valid vowel
    return FALSE;
}

 
/*
Given: a character
Return: 1 if a valid hawaiian consonant, 0 if invalid
Valid Hawaiian consonants
H/h(72/104), K/k(75/107) L/l(76/108) M/m(77/109) N/n(78/110)
P/p(80/112), W/w(87/119) `(39)
 */
 
int is_h_consonant(char input){
    if(input == 72 || input == 104){
        return TRUE;
    }
    if(input == 75 || input == 107){
        return TRUE;
    }
    if(input == 76 || input == 108){
        return TRUE;
    }
    if(input == 77 || input == 109){
        return TRUE;
    }
    if(input == 78 || input == 110){
        return TRUE;
    }
    if(input == 80 || input == 112){
        return TRUE;
    }
    if(input == 87 || input == 119){
        return TRUE;
    }
    if(input == 39){
        return TRUE;
    }
    
    //Not a consonant
    return FALSE;
}


/* Returns TRUE if c is delimiter
*/
int delimitp(char c){
    if(whitep(c) || punctp(c)){
        return TRUE;
    }
    return FALSE;
}

/*Returns TRUE if c is whitespace
*/
int whitep(char c){
    if(c == '\n' || c == '\t' || c == ' '){
        return TRUE;
    }
    return FALSE;
}

/*Returns TRUE if c is a punctuation
*/

int punctp(char c){
    if(c=='.'||c==','||c==';'||c==':'||c=='"'||c==44||c=='!'||c=='?'){
        return TRUE;
    }
    return FALSE;
}
