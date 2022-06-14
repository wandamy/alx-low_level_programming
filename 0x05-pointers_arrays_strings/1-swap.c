#include "main.h"
/**
* swap_int - swaps the value of two pointers
*@a: character argument
@b: character argument
*/
void swap_int(int *a, int *b)
{
int val;
*a = 7;
*b = 8;
val = *a;
*a = *b;
*b = val;
}
