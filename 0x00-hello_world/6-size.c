#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: alway (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu", sizeof(a));
	printf("Size of an int: %lu", sizeof(b));
	printf("Size of a long int: %lu", sizeof(c));
	printf("Size of a long lon int: %lu", sizeof(d));
	printf("Size of afloat:%lu", sizeof(e));
}
