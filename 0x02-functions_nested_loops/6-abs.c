#include "main.h"

/**
 * _abs - computes absolute value of a integer
 * @c: agrument of _abs
 * Return: return int value
 */

int _abs(int c)
{
	int b;

	if (c < 0)
	{
		b = c * -1;
		return (b);
	}
	else
	{
		return (c);
	}
}
