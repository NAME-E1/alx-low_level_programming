#include <stdio.h>

/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: 0 (success)
 */

int main(void)
{
	char b;
	char d = '0';

	while (d <= '9')
       	{
		putchar(d);	
  	        d++;
       	}
	for (b ='a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
