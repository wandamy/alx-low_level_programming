#include "main.h"
/**
 * _strncat - function to append some character
 * @dest: character argument
 * @src: character argument
 * @n: character argument
 * Return: string
 */
char _strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
