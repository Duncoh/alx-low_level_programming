#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - all possible combinations
 * Return: 0 if successful
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
