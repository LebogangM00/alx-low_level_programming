#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
    int pass[100];
    int i, sum, n;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78;
        sum += pass[i];
        putchar(pass[i] + 33);
        if (sum >= 2772 - 128)
        {
            n = 2772 - sum;
            sum += n;
            putchar(n + 33);
            break;
        }
    }

    return (0);
}

