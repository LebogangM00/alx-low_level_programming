#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times to print the table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j != 0)
				_putchar(',');

			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
			else if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
			}

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}

