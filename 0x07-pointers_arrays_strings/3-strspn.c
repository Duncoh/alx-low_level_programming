#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix substring,
 * followed by a new line.
 * @s: initial segment.
 * @accept: Pointer to a string.
 *
 * Return: Length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
