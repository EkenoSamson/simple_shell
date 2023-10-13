#include "simple_shell.h"

/**
 * str_to_int - convert string to integer.
 * @str: string to convert.
 * Return: the integer.
 */

int str_to_int(char *str)
{
	int sign = 1, i = 0;
	unsigned int num = 0;

	while (!(str[i] >= '0' && str[i] <= '9'))
		return (-1);

	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}

	num = num * sign;
	return (num);
}



