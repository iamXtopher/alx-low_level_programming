#include "main.h"


/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search in.
 * @c: The character to search for.
 *
 * Return: If c is found, returns a pointer to the first occurrence of c
 * in s. Otherwise, returns NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
