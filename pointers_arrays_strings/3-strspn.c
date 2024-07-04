#include "main.h"
#include <stdio.h>

/**
 * *_strspn - locate character of string
 * @s: string
 * @accept: character
 * Return: pointer to character in string
 */

unsigned int _strspn(char *s, char *accept)
{
	int result = 0, i = 0, j = 0, check = 0;

	while (s[i] != '\0')
	{
		check = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				check = 1;
				result++;
				break;
			}
			j++;
		}
		if (check == 0)
			break;
		check = 0;
		i++;
	}
	return (result);
}
