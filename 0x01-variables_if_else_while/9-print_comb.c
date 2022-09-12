#include <stdio.h>

/**
 * main - Prints a series of numbers with commas and space in between them
 *
 * Return: Always(Sucessful)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
        putchar(c);
}
if (c != '9')
{
	putchar(',');
	putchar('');
}
putchar('\n');
return(0);
}
