#include "simple_shell.h"

/**
 * execution - gets the command and path to the executer.
 * @inputs: user inputs.
 * @av: command line arguments.
 * @ac: command counter.
 * Return: 0.
 */

int execution(char *inputs[], char **av, int ac)
{
	char *error = "not found\n";
	char *colon = ": ";
	char *ac_s = int_to_str(ac);
	char *command_copy = inputs[0];
	char *full_path = _which(command_copy);

	if (full_path != NULL)
	{
		if (_strcmp(full_path, inputs[0]) == 0)
			execute(full_path, inputs);
		else
		{
			execute(full_path, inputs);
			free(full_path);
		}
		free(ac_s);
		return (0);
	}
	else
	{
		write(2, av[0], _strlen(av[0]));
		write(2, colon, _strlen(colon));
		write(2, ac_s, _strlen(ac_s));
		write(2, colon, _strlen(colon));
		write(2, inputs[0], _strlen(inputs[0]));
		write(2, colon, _strlen(colon));
		write(2, error, _strlen(error));
		free(ac_s);
		return (127);
	}
}
