#include "simple_shell.h"

/**
 * are_all_spaces - checks spaces
 * @str: string to be checked.
 * Return: true or false.
 */

bool are_all_spaces(const char *str)
{
	while (*str)
	{
		if (!isspace(*str))
			return (false);
		str++;
	}
	return (true);
}

