#include "main.h"

/**
 * print_square - this function prints a square,
 * followed by a new line
 * @size: Size of the square
 *
 *Return: Always 0
 */
void print_square(int size)
{
	int col;
	int row;

	if (size > 0)
	{
		for (col = 1 ; col <= size ; col++)
		{
			for (row = 1 ; row <= size ; row++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
