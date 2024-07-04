#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copy memory on pointer
 * @dest: pointer
 * @src: byte
 * @n: size
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
