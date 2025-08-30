#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints "SUCCESS" to stdout using the write system call.
 *
 * Return: 0 on success
 */
int main(void)
{
    char message[] = "SUCCESS\n";

    write(1, message, sizeof(message) - 1);

    return (0);
}
