#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - pointes to the begining of any value of accept in s
 * @s: string to be searched 
 * @accept: string we are looking for.
 *
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	for (int i = 0; *accept[i] != '\0'; i++)
	{
		int j;

		for (j = 0; *s[j] != '\0'; j++)
		{
			if (*accept[i] == *s[j])
			{
				return (s+j);
			}
		}

		j = 0;
	}
	return (NULL);
}
