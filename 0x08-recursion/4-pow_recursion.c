#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)  /* Error case: y is negative */
return (-1);

if (y == 0)  /* Base case: any number raised to the power of 0 is 1 */
return (1);

return (x * _pow_recursion(x, y - 1));  /* Recurse: calculate  use recursion */
}

