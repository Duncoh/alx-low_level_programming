#include <stdio.h>
/**
 * main - this code prints alphabets in lower case and then in upper case
 * Return: 0 if successful
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'z') {
			putchar (d);
			d++;
		}
	putchar('\n');
	return (0);
}
