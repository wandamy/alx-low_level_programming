#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character argument
 */
void print_diagonal(int n)
{
char c;
int i;
if (n <= 0)
_putchar('\n');
else
{
for (c = 0; c < n; c++)
{
for (i = 0; i <= c; i++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
_putchar('\n');
}
}
