#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * followed by a new line
 * @str:input
 * Return: Always 0.
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		putchar(str[k]);
		k++;
	}
	putchar('\n');
}
