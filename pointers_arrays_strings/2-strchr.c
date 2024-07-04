#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate character of string
 * @s: string
 * @c: character
 * Return: pointer to character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (NULL);
}
