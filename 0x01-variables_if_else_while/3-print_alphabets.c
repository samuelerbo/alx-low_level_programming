#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch, c;
  C = 'A';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	do {
    putchar(C);
    C++;
  } while (C <= 'Z');
	putchar('\n');
	return (0);
}
