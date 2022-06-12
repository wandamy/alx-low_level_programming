#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * return: 0 success
 * @n: number of lines to be printed
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
for (c = 0; c < n; c++)
{
_putchar(95);
_putchar('\n');
}
}
