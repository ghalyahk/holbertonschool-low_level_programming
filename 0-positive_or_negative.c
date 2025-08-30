#include <stdio.h>

int main(void)
{
    int n;

    n = 0;
    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Negative\n");
    }
    return (0);
}
