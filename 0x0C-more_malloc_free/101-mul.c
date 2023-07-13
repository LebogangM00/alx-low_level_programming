#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, k;
int *result;
char *mul;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
return (NULL);

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
k = i + j + 1;
result[k] += (num1[i] - '0') * (num2[j] - '0');
result[k - 1] += result[k] / 10;
result[k] %= 10;
}
}

while (result[0] == 0 && len1 + len2 > 1)
{
for (i = 0; i < len1 + len2 - 1; i++)
result[i] = result[i + 1];
len1 += len2 > 0;
len2--;
}

mul = malloc((len1 + len2 + 1) * sizeof(char));
if (mul == NULL)
{
free(result);
return (NULL);
}

for (i = 0; i < len1 + len2; i++)
mul[i] = result[i] + '0';
mul[i] = '\0';

free(result);

return (mul);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
char *num1, *num2, *result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

for (int i = 0; num1[i]; i++)
{
if (!_isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}

for (int i = 0; num2[i]; i++)
{
if (!_isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}

result = multiply(num1, num2);
if (result == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", result);
free(result);

return (0);
}

