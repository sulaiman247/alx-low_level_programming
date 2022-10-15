#include "main.h"

/**
 * _strspn - search last position of a string 
 * @s:the string to be searched
 * @accept: the strings we are looling for.
 *
 * Return: an integer 
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	
	int c;

	int i;

	i = 0;

	c = 0;

	n = 0;

	while (accept[n] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == accept[n])
			{
				if(i > c)
				{
					c = n;
				}
			}
			i++;
		}
		n++;
	}
	return (c);
}

