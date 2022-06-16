/**
 * _strncpy - copie a string
 * @dest:char agrument for _strncpy
 *  @src:char agrument for _strncpy
 * @n:int agrument for _strncpy
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
	while (i < n && *(src + i))
	{
	*(dest + i) = *(src + i);
	i++;
	}
	while (i < n)
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
