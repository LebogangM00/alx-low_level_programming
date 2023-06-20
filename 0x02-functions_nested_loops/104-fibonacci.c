#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int count;
        unsigned long fib1 = 1, fib2 = 2, nextFib;

        printf("%lu", fib1);
        for (count = 1; count < 98; count++)
        {
                printf(", %lu", fib2);
                nextFib = fib1 + fib2;
                fib1 = fib2;
                fib2 = nextFib;
        }
        printf("\n");

        return (0);
}

