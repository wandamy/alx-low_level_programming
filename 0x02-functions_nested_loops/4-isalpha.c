#include "main.h"
/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: character argument
 * Return: 1 or 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
