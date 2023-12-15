#include "shell.h"

/**
 * empty_line - checks if there is an empty line
 * @l: line to be checked
 * Return: 0 or 1
 */

int empty_line(char *l)
{
	int g = 0;

	while (l[g] != '\0')
	{
		if (l[g] != ' ')
			return (0);
		g++;
	}
	return (1);
}
