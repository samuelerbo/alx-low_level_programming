#include "main.h"

/**
 * Description: print_alphabet - print a to z
 *
 * Return - return 0 (successful)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
