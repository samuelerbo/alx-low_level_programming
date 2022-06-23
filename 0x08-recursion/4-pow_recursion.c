/**
  * _pow_recursion - x raised to the power of y
  * @x: integer
  * @y: integer
  * Return: -1 if y <0 , 1 if y = 0
  *	return
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}

	else if (y == 0)
	{
	return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
