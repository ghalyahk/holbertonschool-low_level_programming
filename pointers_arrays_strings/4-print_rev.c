#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string */
	while (s[i] != '\0')
		i++;

	/* Print characters in reverse */
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
