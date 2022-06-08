#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 * return 0 - always success
 */
void print_alphabet_x10(void)
{
char c = 'a';
int j;
for (j = 0; j <= 10; j++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
return (0);
}
