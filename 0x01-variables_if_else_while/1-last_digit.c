#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints random number to variable
 *
 * Return: Always(Sucessful)
 */
int main(void)
{
intn;
strand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);	
}
else if (n % 10 == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else 
{
	printf("Last digit of %d is %d and is less than 5 not 0\n", n, n % 10);
}
return (0);
}
