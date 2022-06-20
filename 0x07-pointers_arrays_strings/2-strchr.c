#include "main.h"
/**
 * _strchr - string character
 * @s: string
 * @c: parameter
 * Return: string
 */
char *_strchr(char *s, char c)
{
int b = 0, d;
while (s[b])
b++;
for (d = 0; b < d; d++)
{
if (c == s[d])
s += d;
return (s);
}
return ('\0');
}
