#include <stdio.h>

/**
 * main - function to prine factors
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
