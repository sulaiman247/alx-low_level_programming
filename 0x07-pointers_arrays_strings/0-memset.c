#include <main.h>

/*memset -  this is eill replace the me
 *
 *@*s : array to be passed
 *@b : character to replace memory
*@n : number of memory space to replace
*
* Return: this will return a pointer.
*
 */



char *_memset(char *s, char b, unsigned int n)
{
	int i = 0 ;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
