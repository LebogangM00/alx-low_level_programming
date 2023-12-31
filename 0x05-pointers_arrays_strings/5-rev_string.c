#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;

/* Calculate the length of the string */
while (s[length] != '\0')
length++;

end = length - 1;

/* Swap characters from start and end until the middle is reached */
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

