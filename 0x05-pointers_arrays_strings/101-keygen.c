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
    int password[100];
    int i, sum, random_char;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        random_char = rand() % 94 + 33;
        password[i] = random_char;
        sum += random_char;
        putchar(random_char);
        if (sum >= 2772 - 126)
        {
            random_char = 2772 - sum;
            sum += random_char;
            putchar(random_char);
            break;
        }
    }

    return (0);
}

