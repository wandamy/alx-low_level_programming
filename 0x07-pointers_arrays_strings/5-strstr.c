#include "main.h"
/**
 * _strstr - function that finds a substring in a main string
 * @haystack: main string
 * @needle: substring
 * Return: a pointer to the beginning of the located string or null
 */
char *_strstr(char *haystack, char *needle)
{
char *result;
result = strstr(haystack, needle);
if (result)
{
return (result);
}
else
{
return (0);
}
}
