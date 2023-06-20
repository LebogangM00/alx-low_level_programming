#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: The number of times
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)
                    _putchar(' ');

                if (product < 100)
                    _putchar(' ');
            }

            if (product >= 100)
            {
                _putchar('0' + (product / 100));
                _putchar('0' + ((product / 10) % 10));
                _putchar('0' + (product % 10));
            }
            else if (product >= 10)
            {
                _putchar(' ');
                _putchar('0' + (product / 10));
                _putchar('0' + (product % 10));
            }
            else
            {
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + product);
            }
        }

        _putchar('\n');
    }
}

