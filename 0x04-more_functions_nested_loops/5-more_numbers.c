#include "main.h"
/**
 * more_numbers - prints ten times the numbers 0 to 14
 */
void more_numbers(void)
{
int c = '0';
int x = '0';
for (c = 0; c < 10; c++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar((y /10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
