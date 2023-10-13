#include "simple_shell.h"

/**
 * int_to_str - convert integer to string.
 * @num: the integer to ocnvert.
 * Return: a string.
 */

char *int_to_str(int num)
{
	int temp_num = num;
	int no_dig = 0, i;
	char *str;

	if (num == 0)
		no_dig = 1;
	else if (num < 0)
	{
		no_dig++;
		temp_num = -temp_num;
	}

	while (temp_num > 0)
	{
		no_dig++;
		temp_num /= 10;
	}
	str = malloc(no_dig + 1);
	i = no_dig - 1;
	str[no_dig] = '\0';

	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}

	while (num > 0)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}
	return (str);
}
