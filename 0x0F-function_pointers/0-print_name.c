/**
  * print_name - prints a name
  * @name: name of a person
  * @f: function  as an argument
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
