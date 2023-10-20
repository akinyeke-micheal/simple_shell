#include "shell.h"
/**
 * set_info - Initializes the information structure for the shell.
 *
 * This function initializes the fields of an `info_t` structure, including
 * the command's name, argument vector, and more, based on the provided
 * arguments.
 *
 * @param info - A pointer to the `info_t` structure to be initialized.
 * @param av - The argument vector representing the command and its arguments.
 */
void set_info(info_t *info, char **av)
{
	int i = 0;

	info->fname = av[0];
	if (info->arg)
	{
		info->argv = strtow(info->arg, " \t");
		if (!info->argv)
		{

			info->argv = malloc(sizeof(char *) * 2);
			if (info->argv)
			{
				info->argv[0] = _strdup(info->arg);
				info->argv[1] = NULL;
			}
		}
		for (i = 0; info->argv && info->argv[i]; i++)
			;
		info->argc = i;

		replace_alias(info);
		replace_vars(info);
	}
}
