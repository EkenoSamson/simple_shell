#include "simple_shell.h"

/**
 * _which - gets the path of a command.
 * @av: cntains command and its arguments.
 * Return: pointer to the path string.
 */

char *_which(char *av)
{
	char *path = getenv("PATH");
	char *path_copy = malloc(_strlen(path) + 1);
	char *path_token, *full_path = NULL;

	if (path == NULL || path_copy == NULL)
	{
		free(path_copy);
		return (NULL);
	}

	if (access(av, X_OK) == 0)
	{
		free(path_copy);
		return (av);
	}
	_strcpy(path_copy, path);
	path_token = strtok(path_copy, ":");

	while (path_token)
	{
		full_path = malloc(_strlen(path_token) + _strlen(av) + 2);
		if (full_path == NULL)
		{
			free(path_copy);
			return (NULL);
		}
		_strcpy(full_path, path_token);
		_strcat(full_path, "/");
		_strcat(full_path, av);
		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (full_path);
		}
		free(full_path);
		path_token = strtok(NULL, ":");
	}
	free(path_copy);
	return (NULL);
}

