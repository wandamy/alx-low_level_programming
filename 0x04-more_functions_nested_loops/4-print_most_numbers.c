#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * Return: return numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
int c = '0';
for (c = '0'; c <= '9'; c++)
{
if (c == 2 || c == 4)
{
}
else
{
_putchar(c);
}
}
_putchar('\n');
}
