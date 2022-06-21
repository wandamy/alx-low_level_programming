#include "main.h"
/**
 * _strspn - function that prints the length of a prefix substring
 * @s: character argument
 * @accept: substring
 * Return: length of prefix substring in bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int a, b;
int length;
length = 0;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
{
length++;
break;
}
}
if (accept[b] == '\0')
{
break;
}
}
return (length);
}
