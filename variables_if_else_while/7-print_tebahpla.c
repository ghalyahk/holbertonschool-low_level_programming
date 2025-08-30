#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
    {
        putchar(c);
    }

    /* طباعة السطر الجديد */
    putchar('\n');

    return (0);
}
