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
	int i;

int counter;

char *ps;

char *pa;

int m;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		m = s[counter];
		if (m <= 90)
			ps[counter] = (m + 32);
		else
			ps[counter] = s[counter];
	}
counter = 0;

m = 0;

for (counter = 0; pa[counter] != '\0'; counter++)
{
	m = accept[counter];

	if (m <= 90)
		pa[counter] = (m + 32);
	else
		pa[counter] = accept[counter];
}


	for (i = 0; accept[i] != '\0'; i++)
	{
		int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (pa[i] == ps[j])
			{
				return (s + j);
			}
		}

		j = 0;
	}
	return (NULL);
	}
