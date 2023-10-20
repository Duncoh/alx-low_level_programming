#include "lists.h"
#include <stdio.h>

void print_fast(void) __attribute__ ((constructor));

/**
* print_fast - a function that prints a given word
* before the main function is executed,
* followed by a new line.
*
* Return: void
*/

void print_fast(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
