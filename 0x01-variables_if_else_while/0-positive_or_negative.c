#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 indicating success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n); /* Print the number */

    if (n > 0)
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    }
    else
    {
        printf("is negative");
    }

    printf("\n"); /* Print a new line */

    return 0;
}
