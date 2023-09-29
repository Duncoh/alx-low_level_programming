#include <stdio.h>
#include <stdio.h>

/**
* main - a program that prints the numbers of arguments
* passed to it,
* followed by a new line.
*
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: 0.
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
