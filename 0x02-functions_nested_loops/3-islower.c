#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: argument for _islowercase
 * Return: return 1 if 'c' is lowercase
 *	otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
