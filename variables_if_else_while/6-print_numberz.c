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
	char n = '0';
	int i;
	char _a = '\n';

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	putchar(_a);
	return (0);
}
