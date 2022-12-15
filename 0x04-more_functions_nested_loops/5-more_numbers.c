#include "main.h"
/*
 * more_numbers - multiply 0-14 by 10
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k < 15 ; k++)
		{
			if (k >= 10)
				putchar ((k / 10) + 48);
			putchar (k % 10) + 48);
		}
		putchar('n');
	}
}
