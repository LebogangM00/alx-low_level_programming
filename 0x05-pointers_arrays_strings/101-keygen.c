#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int passwordLength = 11; // Change this to adjust the length of the password

srand(time(0));

for (i = 0; i < passwordLength; i++)
{
/* Generate a random character in the range [A-Za-z0-9] */
char randomChar = rand() % 62;
if (randomChar < 26)
randomChar += 'A';
else if (randomChar < 52)
randomChar += 'a' - 26;
else
randomChar += '0' - 52;

putchar(randomChar);
}

putchar('\n');

return (0);
}

