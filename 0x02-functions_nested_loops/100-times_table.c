#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table up to 13.
 * @n: The number of times.
 */
void print_times_table(int n)
{
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= 13; j++)
        {
            printf("%-4d", i * j);
        }
        printf("\n");
    }
}

