#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 * Return: numbers 0 to 9
 * @c: character argument
 */
void print_numbers(void)
{
int c = '0';
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n')
}
