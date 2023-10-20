#include "shell.h"
/**
 * clear_info - Initializes an info_t struct by resetting its members.
 *
 * This function is used to reset the members of an info_t struct to their
 * default or initial values. The struct typically holds information related
 * to command line arguments and is commonly used
 * @info: struct address
 */
void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}
