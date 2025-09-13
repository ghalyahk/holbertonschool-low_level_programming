#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i, j;
    int sum = 0;

    /* لو ما في أرقام مطروحة نطبع 0 */
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    /* نمر على كل معامل (بدءًا من argv[1]) */
    for (i = 1; i < argc; i++)
    {
        /* نتحقق هل كل حرف رقم */
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        /* نحول السلسلة إلى عدد صحيح ونضيفه */
        sum += atoi(argv[i]);
    }

    /* نطبع الناتج */
    printf("%d\n", sum);
    return (0);
}
