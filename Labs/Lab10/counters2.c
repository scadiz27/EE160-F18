/*      File : counters2.c       *
 *      By   :  Stephen Cadiz     *
 *      login: scadiz27   *
 *      team : Hammahs        *
 *      Date : 11/8/18    */

/*
 * A set of counting functions written using while loops.
 */

#include <stdio.h>

void count_up(int n);
void count_down(int n);
void count_some(int start, int finish, int incr);

int main()
{
        count_up(10);            /* count up from 1 to 10  */
        count_down(10);          /* count down from 10 to 1 */
        count_some(5, 15, 3);    /* count from 5 to 15 by 3 */
        count_some(15, 5, -3);   /* count from 15 to 5 by -3 */

}

void count_up(int n)
{
  int i;
    //Beginning at i, increment i until it is greater or equal to n
    for(i=1;i<=n;i++){
        printf("%d\n",i); //print i
    }
}

void count_down(int n)
{
  int i;
  //Beginning at n, dencrement i until it is less or equal to 1
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
}

void count_some(int start, int finish, int incr)
{
        int i;
        if (incr == 0)
                return;           /* do nothing if no increment */

        if (incr > 0)       /* count up */
            for(i=start;i<=finish;i+=incr){
                printf("%d\n",i);
            }
        else                /* count down */
            for(i=start;i>=finish;i+=incr){
                printf("%d\n",i);
            }
}