#include "simple_shell.h"

/**
 * prompt_dis - displays the prompt for the user.
 * Description: Displays "$ " symbol
 */

void prompt_dis(void)
{
	char *prompt = "$ ";

	if (isatty(0))
	{
		if (write(STDOUT_FILENO, prompt, 2) == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
}
