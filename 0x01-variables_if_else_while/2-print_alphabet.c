#include <stdio.h>

/**
 * Description: main -print alphabet in lowercase
 * Return: retun 0 if everything is ok
 */

int main(void)
{
	char c;

	c = 'a';
	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n')
	return (0);
}

