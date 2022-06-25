#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num 1 * num 2;
printf("%d\n", result);
return (0);
}
