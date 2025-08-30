#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));    // لتوليد أرقام عشوائية باستخدام الوقت
    n = rand() - RAND_MAX / 2;  // توليد عدد عشوائي بين -RAND_MAX/2 و +RAND_MAX/2

    // الحصول على الرقم الأخير
    last_digit = n % 10;

    // طباعة الرقم الأخير مع التفسير
    if (last_digit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
    }
    else if (last_digit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last_digit);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }

    return (0);
}

