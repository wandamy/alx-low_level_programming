#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * return 0 - always success
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
