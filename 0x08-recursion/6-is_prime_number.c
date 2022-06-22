#include "main.h"
/**
 * is_prime_number - function that checks whether integer is a prime number
 * @n: integer
 * Return: 1 or 0 depending on condition satisfied
 */
int is_prime_number(int n)
{
if (n == 2 && n % 2 != 0)
return (1);
else
return (0);
}
