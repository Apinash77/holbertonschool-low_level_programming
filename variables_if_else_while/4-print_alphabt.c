#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'description for betty requirement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	char _a = '\n';

	while (n <= 'z')
	{
	if ((n == 'q') || (n == 'e'))
		{
		n++;
		}
	else
		{
		putchar(n);
		n++;
		}
	}
	putchar(_a);
	return (0);
}
