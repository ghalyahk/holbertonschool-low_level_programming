#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int r;
	int rem;

	srand(time(NULL));

	while (1)
	{
		/* generate printable ASCII 33..126 */
		r = rand() % (126 - 33 + 1) + 33;

		/* if adding r exactly reaches target, print and exit */
		if (sum + r == 2772)
		{
			putchar(r);
			break;
		}

		/* if adding r exceeds target, see if remainder is printable */
		if (sum + r > 2772)
		{
			rem = 2772 - sum;
			if (rem >= 33 && rem <= 126)
			{
				putchar(rem);
				break;
			}
			/* else reject this r and try another */
			continue;
		}

		/* otherwise accept r and continue */
		putchar(r);
		sum += r;

		/* if remaining value is printable, finish by printing it */
		rem = 2772 - sum;
		if (rem >= 33 && rem <= 126)
		{
			putchar(rem);
			break;
		}
	}

	return (0);
}

