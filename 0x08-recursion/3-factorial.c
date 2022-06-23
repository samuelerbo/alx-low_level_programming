/**
* factorial - returns the factorial of a given number
* @n: integer
* Return: return -1 if n >0 ,1 for factorial 0
*		and return a factorial fo a given number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
