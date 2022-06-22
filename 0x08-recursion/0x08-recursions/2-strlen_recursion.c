#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (strlen(s) == 0)
return (0);
else
return (strlen(s));
}
