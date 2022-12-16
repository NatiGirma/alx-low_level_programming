#include "main.h"
/**
 * print_diagonal - function to draw diagonal line on terminal
 *
 * @n: as int
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar(92);
		if (i < (n - 1))
			putchar('\n');
	}
	putchar('\n');
}
