#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
int j;
char *arg = argv[i];

for (j = 0; arg[j] != '\0'; j++)
{
_putchar(arg[j]);
}
_putchar('\n');
}

return (0);
}

