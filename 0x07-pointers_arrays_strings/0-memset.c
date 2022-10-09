/**
 * _memset - replace memory 
 * @s : memory to be replaced.
 * @b : character to replace s
 * @n : number of memory space to replace
 *
 * Return : s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
