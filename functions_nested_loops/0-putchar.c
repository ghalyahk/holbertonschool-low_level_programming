#include <unistd.h>

/**
 * _putchar - يطبع حرف على الشاشة باستخدام دالة write
 * @c: الحرف المراد طباعته
 *
 * Return: عدد الأحرف المكتوبة أو -1 في حالة الخطأ
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
