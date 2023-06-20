#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    unsigned long a = 1, b = 2, next;

    printf("%lu, %lu", a, b); // Print the first two numbers

    for (i = 3; i <= 98; i++)
    {
        next = a + b;
        printf(", %lu", next);

        // Update variables for next iteration
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}

