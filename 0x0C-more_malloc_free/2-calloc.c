#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
char *ch_ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

ch_ptr = (char *)ptr;

for (i = 0; i < total_size; i++)
ch_ptr[i] = 0;

return (ptr);
}

