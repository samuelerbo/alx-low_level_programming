#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - check if the num is greater than 5
 * Return: returns 0 sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("%d is greater than 5\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is less than 6 and is not 0\n", n);

	return (0);
}
