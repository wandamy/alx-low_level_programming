#include <stdio.h>
/**
 * fizz_buzz - prints fizz, buzz of fizzbuzz depending on the condition
 */
int main(void)
{
int c;
for (c = 1; c <= 100; c++)
{
if (c == 100)
printf("Buzz");
else if (c % 3 == 0)
printf("Fizz");
else if (c % 5 == 0)
printf("Buzz");
else if (c % 3 == 0 && c % 5 == 0)
printf("FizzBuzz");
else
printf("%d", c);
}
}
