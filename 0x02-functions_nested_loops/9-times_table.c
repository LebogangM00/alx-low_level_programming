#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Always print the first digit of the row */

		for (column = 1; column <= 9; column++)
		{
			result = row * column;

			_putchar(',');
			_putchar(' ');

			if (result < 10)
				_putchar(' '); /* Extra space for single-digit numbers */
			else
				_putchar(result / 10 + '0'); /* First digit of two-digit number */

			_putchar(result % 10 + '0');
		}

		_putchar('\n');
	}
}

