#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total) // tail-recursive version
{
assert(n>=1); // pre-condition
if (n==1){
  return 1 + total;
}
else  {
  return sumtail(n-1, n+total); // tail-recursive call
}
}

/* Sum integers 1 to n */
int sumwhile (int n) //while loop version
{
    int sum = 0;
    int i = 1;
    while (i <= n) // loop kører så længe i er mindre eller lig med n
    
    {
        sum += i;
        i++;
    }
    return sum;
}

