#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the name of the file
 * it was compiled from,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
