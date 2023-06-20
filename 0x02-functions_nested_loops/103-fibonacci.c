#include <stdio.h>
/**
 * main - Finds and prints the sum of the even-valued terms
 *        in the Fibonacci sequence up to 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long long int fib1 = 1, fib2 = 2, next;
    unsigned long long int sum = 2;  // Start with the initial even value

    while (fib2 <= 4000000)
    {
        next = fib1 + fib2;
        if (next % 2 == 0)
            sum += next;
        fib1 = fib2;
        fib2 = next;
    }

    printf("%llu\n", sum);

    return 0;
}

