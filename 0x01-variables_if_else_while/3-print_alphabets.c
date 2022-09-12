#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int ade;

	for (ade = 'a'; ade <= 'z'; ade++)
		putchar(ade);
	for (ade = 'A'; ade <= 'Z'; ade++)
		putchar(ade);
	putchar('\n');
	return (0);
}
