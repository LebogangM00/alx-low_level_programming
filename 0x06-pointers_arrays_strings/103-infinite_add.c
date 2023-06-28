#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, len, carry, sum;
int i, j;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 >= size_r || len2 >= size_r)
return (0);

len = len1 >= len2 ? len1 : len2;
carry = 0;

for (i = len1 - 1, j = len2 - 1; len >= 0; i--, j--, len--)
{
sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[len] = sum % 10 + '0';
}

if (carry)
{
if (len >= 0)
r[len] += carry;
else
return (0);
}

if (len < 0 && carry)
return (0);

return (r);
}
