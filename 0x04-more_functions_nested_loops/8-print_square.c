#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
int c;
int y;
if (size <= 0)
_putchar('\n');
else
{
for (c = 0; c < size; c++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
