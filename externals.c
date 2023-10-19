#include "simple_shell.h"

/**
 * execute - processt the command.
 * @av: command arguments.
 * @path: path of teh command.
 * Return: 0 on success; 1 on failure.
 */

int execute(char *path, char *av[])
{
	pid_t processor;
	int waiter;

	processor = fork();

	if (processor == -1)
	{
		perror("Error ");
		exit(EXIT_FAILURE);
	}
	else if (processor == 0)
	{
		if (execve(path, av, environ) == -1)
		{
			perror("Error ");
			exit(EXIT_FAILURE);
		}
		return (errno);
	}
	else
		wait(&waiter);
	return (0);
}

