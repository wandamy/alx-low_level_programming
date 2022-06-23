#include "main.h"
int _strlen(char *s);
/**
 * is_palindrome - checks for an empty string
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
if (_strlen(s) == 0)
return (1);
else
return (0);
}
