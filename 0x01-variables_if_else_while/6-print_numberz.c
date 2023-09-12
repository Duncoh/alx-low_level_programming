#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - singele digits
 * Return: 0 if successful
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
