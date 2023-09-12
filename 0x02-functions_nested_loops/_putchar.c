#include <unistd.h>

/**
 * _putchar - this code writes the character c to stdout
 * @c: character to print
 * Return: Always 1 if successful
 * On error, always return -1, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
