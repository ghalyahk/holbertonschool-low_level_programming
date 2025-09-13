#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')  /* قاعدة التوقف: نهاية السلسلة */
        return;

    _print_rev_recursion(s + 1);  /* نداء ذاتي على الحرف التالي */
    _putchar(*s);  /* طباعة الحرف بعد العودة من النداء الذاتي */
}
