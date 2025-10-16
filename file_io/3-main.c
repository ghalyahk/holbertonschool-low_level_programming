#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to test 3-cp.c manually
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s file_from file_to\n", argv[0]);
        return (1);
    }

    /* simulate running ./cp file_from file_to */
    printf("Running: ./cp %s %s\n", argv[1], argv[2]);
    system("./cp file_from file_to");

    return (0);
}
