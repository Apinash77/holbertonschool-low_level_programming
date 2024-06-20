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
	char m = 'A';
	char _a = '\n';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	while (m <= 'Z')
	{
	putchar(m);
	m++;
	}
	putchar(_a);
	return (0);
}
