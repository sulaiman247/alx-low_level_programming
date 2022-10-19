#include "main.h"
#include <stddef.h>


/**
 * _strstr - serach for a needle in an haystack.
 * @haystack: a parameter containing hay of string
 * @neddle: the string to find.
 *
 * Return: a pointer.
 */

char* _strstr(char *haystack, char *needle)
{
	int i;
	
	i = 0;

	int j;
       
	j = 0;

	while(haystack[i] != '\0')
	{
		if(haystack[i] == needle[0])
		{
			int n;
			
			n = i;

			while(needle[j] != '\0')
			{
				if (haystack[n] == needle[j])
				{
					n++;
					j++;
				}
				else
				{
					j=0;
					i++;
					break;
				}
				return (i);
			}
			i++;
		}
		return NULL;
	}
