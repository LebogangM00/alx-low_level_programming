#include "main.h"
#include <stdlib.h>

/**
 * is_separator - Checks if a character is a separator
 * @c: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n.,;:!\"(){}[]<>";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}

return (0);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
int count = 0, is_word = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (!is_separator(str[i]) && !is_word)
{
is_word = 1;
count++;
}
else if (is_separator(str[i]))
{
is_word = 0;
}
}

return (count);
}

/**
 * allocate_words - Allocates memory for an array of words
 * @str: The input string
 * @word_count: The number of words
 *
 * Return: Pointer to the array of words, or NULL on failure
 */
char **allocate_words(char *str, int word_count)
{
char **words;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

int i, len, j = 0, k = 0;
for (i = 0; i < word_count; i++)
{
while (is_separator(str[j]))
j++;

len = 0;
while (!is_separator(str[j + len]) && str[j + len] != '\0')
len++;

words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i > 0)
free(words[--i]);
free(words);
return (NULL);
}

for (k = 0; k < len; k++)
words[i][k] = str[j + k];

words[i][k] = '\0';
j += len;
}

words[word_count] = NULL;
return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int word_count;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = allocate_words(str, word_count);

return (words);
}

