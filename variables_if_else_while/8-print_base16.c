#include <stdio.h>

int main(void)
{
	int i;

	/* طباعة الأرقام من 0 إلى 9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* طباعة الحروف من a إلى f */
	for (i = 10; i < 16; i++)
	{
		putchar(i - 10 + 'a');
	}

	putchar('\n'); /* طباعة السطر الجديد */
	return (0);
}
