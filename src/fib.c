/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp) // tail recursive version
{
  assert (n >= 0); // pre-condition
  if (n == 1){ // base case
    return p;
  }
     else if (n == 2) // base case
    {
        return pp;
    }
  else{
    return fib (n - 1, pp, p + pp); // tail recursive kald
  }
}
