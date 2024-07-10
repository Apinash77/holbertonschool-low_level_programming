#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *string;
	int index = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	for (; index <= len; index++)
	{
		string[index] = str[index];
	}
	string[index] = '\0';

	return (string);
}
