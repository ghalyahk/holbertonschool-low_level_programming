#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    /* تهيئة مولد الأرقام العشوائية */
    srand(time(0)); 

    /* توليد رقم عشوائي */
    n = rand() - RAND_MAX / 2;

    /* التحقق إذا كان الرقم موجبًا أو سالبًا أو صفر */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return 0;
}
