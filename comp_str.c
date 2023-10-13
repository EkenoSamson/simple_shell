#include "simple_shell.h"

/**
 * _strcmp - compare two strings.
 * @str1: first string.
 * @str2: second string.
 * Return: 0 when they are indetical.
 */

int _strcmp(char *str1, char *str2)
{
	int diff = 0;

	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	if (str1 != str2)
		diff = *str1 - *str2;

	return (diff);
}

