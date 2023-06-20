#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, nextFib;
	int sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		nextFib = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%d\n", sum);

	return (0);
}

