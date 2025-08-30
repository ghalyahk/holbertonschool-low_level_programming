#include <stdio.h>

int main(void)
{
    /* طباعة الأرقام من 0 إلى 9 */
    int i;
    for (i = 48; i < 58; i++)
    {
        putchar(i);
    }

    /* طباعة الأحرف من a إلى f */
    for (i = 97; i < 103; i++)
    {
        putchar(i);
    }

    putchar('\n');
    return (0);
}
