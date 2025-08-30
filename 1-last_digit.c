#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* هذا لتوليد أرقام عشوائية مختلفة في كل مرة */
    n = rand() - RAND_MAX / 2;  /* هذا يجعل الرقم ضمن المجال السالب والموجب */

    last_digit = n % 10;  /* الحصول على الرقم الأخير */

    printf("Last digit of %d is %d", n, last_digit);

    if (last_digit > 5)
    {
        printf(" and is greater than 5");
    }
    else if (last_digit == 0)
    {
        printf(" and is 0");
    }
    else if (last_digit < 6 && last_digit != 0)
    {
        printf(" and is less than 6 and not 0");
    }

    printf("\n");

    return 0;
}
