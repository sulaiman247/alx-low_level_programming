#include "main.h"

/**
 * memcpy - copies memory location
 * @dest: this is the destination
 * @src: this is the sorce of bytes
 * @n: thisis the number of bytes to copy
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while(i < n)
	{
		*(dest+i) = (src+i);
			i++;
	}
	return (dest);
}
