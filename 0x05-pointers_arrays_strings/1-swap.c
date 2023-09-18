#include "main.h"

/**
 * swap_int - this function swaps the values of two integers.
 * @a: Variable 1.
 * @b: Variable 2.
 *
 *Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
