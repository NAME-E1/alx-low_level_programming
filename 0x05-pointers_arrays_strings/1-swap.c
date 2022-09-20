#include <stdio.h>
#include "main.h"

/**
 * swap_int- This function swaps the value of two integers
 * @a: the poiter dereference for changing the value of variable a
 * @b: a pointer dereference for changing the value of the variable b
 * int c: assigning the address of the variable a to c
 * Return 0 success.
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
