#include <stdio.h>

/**
 * main - Entry point
 * Description: print lower case alphabet without q&e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ade;

	for (ade = 'a'; ade <= 'z'; ade++)
	{
		if (ade != 'q' && ade != 'e')
			putchar(ade);
	}
	putchar('\n');
	return (0);
}
