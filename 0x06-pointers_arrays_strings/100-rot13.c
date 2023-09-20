#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13,
 * followed by a new line.
 * @a: Pointer to array.
 *
 * Return: Always 0 (success)
 */
char *rot13(char *a)
{
	int i, j;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = ch[j];
				break;
			}
		}
	}
	return (a);
}
