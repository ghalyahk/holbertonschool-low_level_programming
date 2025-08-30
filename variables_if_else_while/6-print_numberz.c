#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Description: This program prints all digits of base 10 starting from 0
 * and ends with a new line. It uses only the putchar function and no
 * variables of type char.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
