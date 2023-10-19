#include "simple_shell.h"

/**
 * end - terminates the shell.
 * @inputs: tokenized inputs
 * @str: untokenized inputs.
 * @av: program information.
 * @ac: information count.
 * @status: exit status.
 */

void end(char **inputs, char *str, char **av, int ac, int status)
{
	char *error = "illegal number", *ac_c = int_to_str(ac), *colon = ": ";
	char n_l = '\n';

	if (inputs[1] != NULL)
	{
		status = str_to_int(inputs[1]);

		if (status == -1)
		{
			write(2, av[0], _strlen(av[0]));
			write(2, colon, 2);
			write(2, ac_c, _strlen(ac_c));
			write(2, colon, 2);
			write(2, inputs[0], _strlen(inputs[0]));
			write(2, colon, 2);
			write(2, error, _strlen(error));
			write(2, colon, 2);
			write(2, inputs[1], _strlen(inputs[1]));
			write(2, &n_l, 1);
			free(ac_c);
		}
		else
		{
			free(ac_c);
			_free(inputs, str);
			exit(status);
		}
	}
	else
	{
		free(ac_c);
		_free(inputs, str);
		exit(EXIT_SUCCESS);
	}
}
