#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - all letters except q and e
 * Return: 0 if successful
 */

int main(void)

{
	char low, e, q;

	e = 'e';
		q = 'q';

		for (low = 'a'; low <= 'z'; low++)
		{
			if (low != e && low != q)
				putchar(low);
		}
		putchar('\n');
		return (0);
}
