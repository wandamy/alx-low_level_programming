#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
char h = 'A';
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (h = 'A'; h <= 'Z'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
