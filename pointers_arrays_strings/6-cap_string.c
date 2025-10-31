#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: the modified string
 */
char *cap_string(char *s)
{
    int i = 0;
    char sep[] = " \t\n,;.!?\"(){}";
    int j;

    /* Capitalize first character if it's lowercase */
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;

    while (s[i] != '\0')
    {
        for (j = 0; sep[j] != '\0'; j++)
        {
            if (s[i] == sep[j])
            {
                /* If next char is lowercase, capitalize it */
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                    s[i + 1] -= 32;
            }
        }
        i++;
    }
    return (s);
}
