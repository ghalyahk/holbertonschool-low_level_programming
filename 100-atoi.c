#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer or 0 if no numbers found
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num_started = 0;
    unsigned int result = 0;

    while (s[i])
    {
        if (s[i] == '-')
        {
            if (num_started)
                break;
            sign = -sign;
        }
        else if (s[i] == '+')
        {
            if (num_started)
                break;
            /* sign unchanged */
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num_started = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (num_started)
        {
            /* once number started, break at first non-digit */
            break;
        }
        i++;
    }
    return (int)(sign * (int)result);
}
