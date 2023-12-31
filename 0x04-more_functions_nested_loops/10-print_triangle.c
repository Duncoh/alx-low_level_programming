#include "main.h"

/**
 * print_triangle - this function prints a triangle,
 * followed by a new line
 * @size: Size of the triangle.
 *
 * Return: ALways 0
 */
void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (col = 1 ; col <= size ; col++)
			{
				if (col <= size - row)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
