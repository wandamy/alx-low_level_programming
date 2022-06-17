#include "main.h"
/**
<<<<<<< HEAD
 * _strncat - function to append some character
 * @dest: character argument
 * @src: character argument
 * @n: character argument
 * Return: string
 */
char _strncat(char *dest, char *src, int n)
=======
*_strncat - function to append some characters
*@dest: character argument
*@src: character argument
*@n: another character argument
*return: string
*/
char *_strncat(char *dest, char *src, int n)
>>>>>>> fe1e3ff86e4abe68fc8f845e83d624731cf6e50e
{
strncat(dest, src, n);
return (dest);
}
