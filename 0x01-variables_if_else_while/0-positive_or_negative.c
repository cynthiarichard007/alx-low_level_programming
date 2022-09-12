#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero, or negative
 *
 * Return: Always(Sucessful)
 */
int main(void)
{
        intn;

        strand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 5)
        {
    		printf("%! is positive\n", n);

        }

        else if (n % 10 == 0)
        {
                printf("%! is zero\n", n);
        }

        else
        {
                printf("%! is negative\n", n);
        }

return (0);
}
