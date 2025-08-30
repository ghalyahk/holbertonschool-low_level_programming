#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');  /* Print the digit by adding the ASCII value of '0' */
        
        if (i != 9)  /* Check if it's not the last number */
        {
            putchar(',');  /* Print the comma separator */
            putchar(' ');  /* Print the space after the comma */
        }
    }
    putchar('\n');  /* Print a newline at the end */

    return (0);
}
