#include "main.h"

/**
 * rev_string - Reverses a string in-place
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	/* Find the length of the string */
	while (s[i] != '\0')
		i--;

	/* Swap characters from both ends */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
