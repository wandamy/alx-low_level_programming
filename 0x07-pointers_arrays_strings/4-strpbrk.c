#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: character argument
 * @accept: character to be searched
 * Return:a pointer to the char s that matches any of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (accept[b] == s[a])
{
return (s + a);
}
}
}
return (0);
}
