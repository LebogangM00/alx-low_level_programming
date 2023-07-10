#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int totalLength = 0, i, k;
int argLength;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the arguments plus newlines */
for (i = 0; i < ac; i++)
{
argLength = 0;
while (av[i][argLength] != '\0')
argLength++;
totalLength += argLength + 1; /* Add 1 for newline */
}

concatenated = malloc((totalLength + 1) * sizeof(char)); /* Add 1 for null */
if (concatenated == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
argLength = 0;
while (av[i][argLength] != '\0')
{
concatenated[k] = av[i][argLength];
k++;
argLength++;
}
concatenated[k] = '\n'; /* Add newline character */
k++;
}
concatenated[k] = '\0'; /* Add null-terminator */

return (concatenated);
}

