#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}

return (length);
}

/**
 * puts_half - Prints half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start;

if (length % 2 == 0)
start = length / 2;
else
start = (length + 1) / 2;

while (str[start])
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}

