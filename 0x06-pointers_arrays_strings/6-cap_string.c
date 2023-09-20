#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string,
 * followed by a new line.
 * @a: Pointer to array
 *
 * Return: Always 0 (success)
 */
char *cap_string(char *a)
{
	int i, j, k;
	char b[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (a[j] > 96 && a[j] < 123)
		{
			for (k = 0; k < 13; k++)
			{
				if (a[j - 1] == b[k])
				{
					a[j] = a[j] - 32;
				}
			}
		}
	}
	if (a[0] > 96 && a[0] < 123)
		a[0] = a[0] - 32;
	return (a);

}
