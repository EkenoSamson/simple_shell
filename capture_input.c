#include "simple_shell.h"

/**
 * capture - capture user input.
 * @str: the buffer to store the string.
 * Return: user input string.
 */

char *capture(char *str)
{
	size_t n = 0;
	ssize_t no_char_r = getline(&str, &n, stdin);

	if (no_char_r == -1)
	{
		if (feof(stdin))
		{
			free(str);
			return (NULL);
		}
		free(str);
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (_strcmp(str, "\n") != 0)
		str[no_char_r - 1] = '\0';
	return (str);
}
