#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aeotlAEOTL";
	char nums[] =    "4307143071";

	while (s[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
		}
		i++;
	}
	return (s);
}
