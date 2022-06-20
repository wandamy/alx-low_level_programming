#include "main.h"
/**
 * *_memset - function that fills memory with constant byte
 * @s: string
 * @b: parameter
 * @n: parameter
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int d;
for (d = 0; d < n; d++)
s[d] = b;
return (s);
}
