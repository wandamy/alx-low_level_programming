#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * @c: character argument
 */
void print_most_numbers(void)
{
int c = 0;
for (c = 0; c <= 9; c++)
{
if (c != 2 || c != 4)
_putchar(c + 48);
}
_putchar('\n');
}
