#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - return and of string starting on a character
 * @s: string
 * @accept: character
 * Return: pointer to character in string
 */

char *_strpbrk(char *s, char *accept)
{
	int s_length = 0;
	int i, j;

	while (s[s_length] != '\0')
		s_length++;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return s + i;
			}
		}
	}
	return (NULL);
}
