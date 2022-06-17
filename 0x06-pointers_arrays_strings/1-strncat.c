#include "main.h"
/**
*_strncat - function to append some characters
*@dest: character argument
*@src: character argument
*@n: another character argument
*return: string
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(*dest, *src, n);
return (dest);
}
