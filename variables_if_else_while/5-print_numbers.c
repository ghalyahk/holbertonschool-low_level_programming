#include <stdio.h>

int main(void)
{
    int i;

    /* طباعة الأرقام من 0 إلى 9 */
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');  /* تحويل الرقم إلى الحرف المناسب في ASCII */
    }

    putchar('\n');  /* طباعة السطر الجديد */

    return (0);
}
