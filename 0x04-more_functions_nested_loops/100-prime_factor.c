#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @number: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long number);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long number = 612852475143;
long largest_prime;

largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return (0);
}

