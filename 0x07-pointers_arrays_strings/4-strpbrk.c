#include "main.h"


/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */


char *_strpbrk(char *o, char *accept)
{
		int i;

		while (*o)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*o == accept[i])
			return (o);
			}
		o++;
		}

	return ('\0');
}
