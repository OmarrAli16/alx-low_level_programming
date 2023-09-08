#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: print the value of n status
 *
 * Return: 0 (success)
 */
int main(void)
{
        int last;
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        last = n % 10;

        if (last > 5)
                printf("Last digit of %i is %i and is greater than 5\n", n, last);
        else if (last == 0)
                 printf("Last digit of %i is %i and is 0\n", n, last);
        else if (last != 0 && last < 6)
                 printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
        return (0);
}
