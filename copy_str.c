#include "simple_shell.h"

/**
 * _strcpy - get a copy of a string.
 * @dest: string to store the copy.
 * @src: string to be copied.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int length  = _strlen(src);
	int i;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];
	return (dest);
}
