#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector (not used here)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
    (void)argv; /* لتجنب تحذيرات unused variable */
    printf("%d\n", argc - 1);
    return (0);
}
