#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number and
 * evaluates if the last digit is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	/* Initialize random number generator */
	srand(time(0));

	/* Generate a random number */
	n = rand() - RAND_MAX / 2;

	/* Get the last digit of n */
	last_digit = n % 10;

	/* Print the result based on the value of the last digit */
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
