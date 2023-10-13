#include "simple_shell.h"

/**
 * _free - release memory allocated.
 * @inputs: tokenized user input.
 * @str: untokenized user input.
 */

void _free(char **inputs, char *str)
{
	int i;

	free(str);

	for (i = 0; inputs[i] != NULL; i++)
		free(inputs[i]);
	free(inputs);
}
