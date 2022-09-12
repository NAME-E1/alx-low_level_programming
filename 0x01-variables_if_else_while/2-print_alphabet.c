#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int ade;
	for (ade = 'a'; ade <= 'z'; ade++)
	{
		putchar(ade);
	}
	putchar('\n');
return (0);
}
