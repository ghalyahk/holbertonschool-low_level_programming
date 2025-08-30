#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - يطبع جميع الأعداد الطبيعية من n إلى 98
 * @n: العدد الابتدائي
 *
 * Return: لا شيء (void)
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
        printf("98\n");
    }
    else
    {
        while (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
        printf("98\n");
    }
}
