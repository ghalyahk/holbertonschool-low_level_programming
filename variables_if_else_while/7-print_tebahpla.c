#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order
 *
 * Description: This program prints the lowercase alphabet in reverse
 * order using the putchar function only, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }

    putchar('\n');

    return (0);
}
