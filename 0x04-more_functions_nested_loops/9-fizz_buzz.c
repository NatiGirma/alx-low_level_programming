#include <stdio.h>

/**
 * fmain - function to print numbers 1 - 100
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	printf(" Fizz");
	else if (i % 5 == 0)
	printf(" Buzz");
	else if (i % 3 == 0 || i % 5 == 0)
	printf(" FizzBuzz");
	else
	printf(" %d", i);
	}
	printf("\n");
	return (0);
}	
