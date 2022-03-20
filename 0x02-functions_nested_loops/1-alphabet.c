#include "main.h"
/**
 * main - check the code
 * print_alphabet- Print lower case alphbets
 */
void print_alphabet(void)
{
	char lose;

	lose = 'a';

	while (lose <= 'z')
	{
		_putchar(lose);
		lose++;
	}
	_putchar('\n');
}
