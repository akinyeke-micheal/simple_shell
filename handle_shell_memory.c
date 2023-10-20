#include "shell.h"
/**
 * free_info - Frees memory associated with the fields of an info_t struct.
 *
 * This function deallocates memory for the fields of the provided info_t
 * structure. If the `all` parameter is set to true, it frees additional
 * resources beyond the basic fields.
 *
 * @info: A pointer to the info_t structure to be processed.
 * @all: Set to true if freeing all fields, including additional resources.
 */
void free_info(info_t *info, int all)
{
	ffree(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
		if (info->env)
			free_list(&(info->env));
		if (info->history)
			free_list(&(info->history));
		if (info->alias)
			free_list(&(info->alias));
		ffree(info->environ);
			info->environ = NULL;
		bfree((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	}
}
