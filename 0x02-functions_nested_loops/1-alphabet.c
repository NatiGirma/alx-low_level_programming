#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 1 (Success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
_putchar('\n');
}
