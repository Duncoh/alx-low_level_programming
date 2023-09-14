#include "main.h"

/**
 * more_numbers - This function prints numbers 0 to 14,
 * ten times, followed by a new line.
 *
 *Return: Always void.
 */
void more_numbers(void)
{
	int times;
	int num;

	for (times = 1 ; times <= 10 ; times++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
