#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Loop to print letters from 'a' to 'z' */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');  /* New line after printing all letters */
    
    return (0);
}
