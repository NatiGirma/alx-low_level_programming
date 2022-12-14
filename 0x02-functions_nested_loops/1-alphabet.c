#include "main.h"

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

void print_alphabet(void){
	char ch;

	ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	putchar('\n');
}
