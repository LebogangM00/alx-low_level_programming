#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, i, j, sum, carry;

len1 = 0;
while (n1[len1] != '\0')
len1++;

len2 = 0;
while (n2[len2] != '\0')
len2++;

if (size_r <= len1 || size_r <= len2)
return (0);

carry = 0;
i = len1 - 1;
j = len2 - 1;
r[size_r - 1] = '\0';

while (i >= 0 || j >= 0 || carry != 0)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[size_r - 2] = sum % 10 + '0';

i--;
j--;
size_r--;
}

return (r + size_r - 1);
}

