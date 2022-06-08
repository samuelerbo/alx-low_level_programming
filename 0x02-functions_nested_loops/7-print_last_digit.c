#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @d:  argument at print_last_digit
 * Return: return the value of the last digit
 */

int print_last_digit(int d)
{
	int c = d % 10;

	return (_putchar(c));
}
