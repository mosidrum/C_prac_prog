#include <stdio.h>

/**
* swap_int -> This swaps values of two integers
* @a: parameter 1
* @b: parameter 2
*/


int main(int *a, int *b)
{
   int keep;
   int *a;
   int *b;

   keep = *a;
   *a = *b;
   *b = keep;
   return (0);
}
