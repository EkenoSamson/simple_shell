#include "simple_shell.h"

/**
 * main - simple UNIX command interpreter.
 * @ac: number of commandline arguments.
 * @av: array of arguments.
 * Return: 0.
 */

int main(int ac, char **av)
{
	char *str_captured = NULL;
	char **inputs;
	int status;

	while (1)
	{
		prompt_dis();
		str_captured = capture(str_captured, status);

		if (are_all_spaces(str_captured))
		{
			free(str_captured);
			continue;
		}
		inputs = malloc(sizeof(char *) * 1024);
		inputs = tokens(str_captured, inputs, _strlen(str_captured));

		if (_strcmp(inputs[0], "exit") == 0)
			end(inputs, str_captured, av, ac, status);
		else
			status = execution(inputs, av, ac);
		ac++;
		_free(inputs, str_captured);
	}
	return  (status);
}
