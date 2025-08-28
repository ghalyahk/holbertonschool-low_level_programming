#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
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
