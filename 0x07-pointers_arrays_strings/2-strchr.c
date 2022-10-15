#include "main.h"

/**
 * _strchr - this function finds a string c in s
 * @s: this is the set of values
 * @c: this is the char we want to find
 *
 * Return: return depends on condition
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while ( s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
