#include "simple_shell.h"

/**
 * tokens - parses the user inputs.
 * @str: user input.
 * @inputs: buffer to store the parsed string.
 * @n: size of teh string.
 * Return: pointer to array.
 */

char **tokens(char *str, char *inputs[], size_t n)
{
	int i = 0;
	char *des = malloc(n + 2);
	char *delim = " ";
	char *token;

	_strcpy(des, str);
	token = strtok(des, delim);
	while (token)
	{
		inputs[i] = malloc(_strlen(token) + 1);
		if (inputs[i] == NULL)
		{
			perror("Error ");
			exit(EXIT_FAILURE);
		}
		_strcpy(inputs[i], token);
		i++;
		token = strtok(NULL, delim);
	}
	inputs[i] = NULL;
	free(des);
	return (inputs);
}

