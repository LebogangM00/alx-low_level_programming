#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *duplicate;
int length, i;

if (str == NULL)
return (NULL);

length = 0;
while (str[length] != '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}

