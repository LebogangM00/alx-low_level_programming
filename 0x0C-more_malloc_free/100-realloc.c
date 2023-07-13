#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ch_ptr;
char *ch_new_ptr;
void *new_ptr;
unsigned int i;

/* If new_size is zero, free(ptr) and return NULL */
if (new_size == 0)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
return (malloc(new_size));

/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* Allocate new memory block with new_size */
new_ptr = malloc(new_size);

/* If malloc fails, return NULL */
if (new_ptr == NULL)
return (NULL);

/* Copy contents to the newly allocated space */
/* Copy the minimum of old_size and new_size */
if (new_size < old_size)
old_size = new_size;

ch_ptr = (char *)ptr;
ch_new_ptr = (char *)new_ptr;
for (i = 0; i < old_size; i++)
ch_new_ptr[i] = ch_ptr[i];

/* Free the old memory block */
free(ptr);

return (new_ptr);
}

