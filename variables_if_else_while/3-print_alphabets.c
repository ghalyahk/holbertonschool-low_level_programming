#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print lowercase alphabet */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* Print uppercase alphabet */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');  /* New line at the end */

	return (0);
}
