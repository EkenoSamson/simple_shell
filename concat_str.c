#include "simple_shell.h"

/**
 * _strcat - merge two strings.
 * @dest: string that will store the result.
 * @src: the other string.
 * Return: the one storing.
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

