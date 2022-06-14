#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src
 * @src:source
 * @dest:destination
 * Return: pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	size_t k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
