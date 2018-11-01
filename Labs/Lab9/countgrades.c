/*      File : countgrades.c    *
 *      By   :   Stephen Cadiz               *
 *      login:  scadiz27                *
 *      team :   Hammahs               *
 *      Date :  11/01/2018                */

/*  A program to count the number of grades occuring in the input */
/* to be used with sample.dat */


#include <stdio.h>

#define DEBUG1 //Debugging character read
#define DEBUG2 //Debugging counters

//Used to define range of uppercase characters for to_lower()
#define   IS_UPPER(c)   ((c) >= 'A' && (c) <= 'Z')

//Convert uppcase input to lowercase
char to_lower(char c);

int main()
{

    int ch;
  int a;
  int b;
  int c;
  int d;
  int f;
  int others;

       a = b = c = d = f = 0;
       others = 0;
       
       //Loop to read characters until end of file is found
       while ((ch = getchar()) != EOF)
       {
            //Convert digit to lowercase
           ch = to_lower(ch);
           
           #ifdef DEBUG1
           //print each character being read
           printf("[DEBUG1] Character being read: %c\n",ch);
           #endif

              switch(ch)
              {
                 case 'a': a++; //If a is read, increment count
                 #ifdef DEBUG2
                 printf("a: %d\n", a);
                 #endif
                 break;

                 
                 case 'b': b++; //If b is read, increment count
                 #ifdef DEBUG2
                 printf("b: %d\n", b);
                 #endif
                 break;
                 
                 
                 case 'c': c++; //If c is read, increment count
                 #ifdef DEBUG2
                 printf("c: %d\n", c);
                 #endif
                 break;
                 
                 case 'd': d++; //If d is read, increment count
                 #ifdef DEBUG2
                 printf("d: %d\n", d);
                 #endif
                 break;
                 
                 case 'f': f++; //If f is read, increment count
                 #ifdef DEBUG2
                 printf("f: %d\n", f);
                 #endif
                 break;
                 
                 //Ignore newline
                 case '\n':
                 break;
                 
                 //Ignore whitespace
                 case ' ':
                 break;
                 
                 //Ignore whitespace (tab)
                 case '\t':
                 break;
                
                 //If any other character (non whitespace) is read, increment
                 default: others++; 
                 #ifdef DEBUG2
                 printf("others: %d\n", others);
                 #endif
              }
       }
       
       //Display results
       printf("Grade counts:\n");

       printf("  A's: %d\n", a);
       printf("  B's: %d\n", b);
       printf("  C's: %d\n", c);
       printf("  D's: %d\n", d);
       printf("  F's: %d\n", f);
       printf("  Other grades: %d\n", others);

}

//Convert lowercase input to uppercase
char to_lower(char c)
{
	if(IS_UPPER(c)) return c - 'A' + 'a';
	return c;
}
