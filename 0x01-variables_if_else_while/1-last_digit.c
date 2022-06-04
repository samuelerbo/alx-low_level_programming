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
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else
		printf("Last digit of %d is %d and less than 6 and is not 0\n", n, x);

	return (0);
}
