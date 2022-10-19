#include "main.h"

/**
 * _strspn - search last position of a strin
 * @s:the string to be searched
 * @accept: the strings we are looling for.
 *
 * Return: an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	int  arn;

	arn  = 1;

char a[arn];

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
				for( int j = 0; j < arn; j++)
				{
					if (a[j] != accept[n])
					{
					if(i > c)
			
					c = n;
			}
			i++;
		}
		n++;
	}
	return (c);
}

