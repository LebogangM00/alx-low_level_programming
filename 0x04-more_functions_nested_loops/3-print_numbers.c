#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 */
void print_numbers(void)
{
char numbers[] = "0123456789";
int i;

for (i = 0; i < 10; i++)
{
if (_putchar(numbers[i]) == -1)
{
/* Handle error or exit loop if _putchar fails */
return;
}
}

_putchar('\n');
}

