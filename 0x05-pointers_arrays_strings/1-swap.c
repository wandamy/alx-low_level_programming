#include "main.h"
/**
* swap_int - swaps the value of two pointers
*@a: character argument
*@b: parameter function
*/
void swap_int(int *a, int *b)
{
int val;
val = *a;
*a = *b;
*b = val;
}
