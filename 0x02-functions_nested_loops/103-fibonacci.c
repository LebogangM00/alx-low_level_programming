#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Calculates the sum of even-valued terms in the Fibonacci
 *              sequence up to 4,000,000 and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    uint64_t term1 = 1; /* First term */
    uint64_t term2 = 2; /* Second term */
    uint64_t nextTerm = 0; /* Next term */
    uint64_t sum = 2; /* Sum of even-valued terms, initialized with the second term */

    while (nextTerm <= 4000000)
    {
        nextTerm = term1 + term2;

        if (nextTerm % 2 == 0)
            sum += nextTerm;

        term1 = term2;
        term2 = nextTerm;
    }

    printf("%lu\n", sum);

    return (0);
}

