#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
if (n % 2 != 0)
return (-1);
else
return (sqrt(n));
}
