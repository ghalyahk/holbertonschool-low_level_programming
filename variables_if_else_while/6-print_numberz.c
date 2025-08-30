#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');  /* تحويل الرقم إلى الحرف المناسب في ASCII */
    }

    putchar('\n');  /* طباعة سطر جديد في النهاية */
    return (0);
}
