#include "main.h"

/*
 * print_alphabet_x10 : 10 times print alphabet
 *
 * Return - return 0 (successful)
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	a++;
	}
}
