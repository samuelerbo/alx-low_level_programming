#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - checks the sign of a number
 * Return: returns 0 if everything is ok
 */

void positive_or_negative(int i)
{

	if (i > 0)
	printf("%d is positive\n", i);
	else if (i == 0)
	printf("%d is zero\n", i);
	else
	printf("%d is negative\n", i);

}
