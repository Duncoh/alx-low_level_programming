#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued terms,
* followed by a new line.
* @void: The evaluated input
* Description: computes & prints the sum of all the multiples of 3, 5 of  1024
* Return: 0 Value if it works
*/
int main(void)
{
	long int x = 1, y = 2, z, w, sum = 2;

	for (w = 0; w < 50; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if ((z >= 2) && (z <= 4000000) && (z % 2 == 0))
			sum += z;

	}
	printf("%li\n", sum);
	return (0);
}
