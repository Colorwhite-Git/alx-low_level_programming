#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Every time this program is run, a random number will be assigned to the variable n.
 * Program prints if the value contained in the variable n is positive, negative, or zero.
 *
 * Return: Always 0
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else // Removed unnecessary condition (n < 0)
    {
        printf("%d is negative\n", n);
    }

    return 0;
}
