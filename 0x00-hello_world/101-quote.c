include <unistd.h>

/**
 * main - Print "and that piece of art is usefull" - Dora Korpar, 2015-10-19"
 * Return: Always 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
