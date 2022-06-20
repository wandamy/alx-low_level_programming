#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the memory destination
 * @src: source of memory
 * @n: parameter
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int d;
for (d = 0; d < n; d++)
dest[d] = src[d];
return (dest);
}
