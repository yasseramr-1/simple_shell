#include "shell.h"

/**
 * search_path - search file between the path
 * @cmd: the command
 * Return: command path
 */

char *search_path(char *cmd)
{
	int j = 0, len = 0;
	char *pa = _getenv("PATH");
	char *copyy, *conc = NULL;
	char **pa_strtok;
	struct stat st;

	if (stat(cmd, &st) == 0)
		return (cmd);

	copyy = malloc(_strlen(pa) + 1);

	copyy = _strcpy(copyy, pa);
	pa_strtok = _split(copyy, ":");

	while (pa_strtok[j])
	{
		len = _strlen(pa_strtok[j]);

		if (pa_strtok[j][len - 1] != '/')
			conc = _strcat(pa_strtok[j], "/");

		conc = _strcat(pa_strtok[j], cmd);

		if (stat(conc, &st) == 0)
			break;

		j++;
	}

	free(copyy);

	if (!pa_strtok[j])
	{
		free(pa_strtok);
		return (NULL);
	}

	free(pa_strtok);
	return (conc);
}
