#include <stdio.h>
#include "main.h"

/**
 * Description: This function swaps the value of two integers
 * Return 0 success.
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
