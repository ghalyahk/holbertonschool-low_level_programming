#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Initialize the random number generator */
    n = rand() - RAND_MAX / 2;  /* Generate a random number */
    last_digit = n % 10;  /* Get the last digit of the number */

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
