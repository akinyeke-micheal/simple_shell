#include "shell.h"
/**
 * _erratoi - Converts a string to an integer, handling errors.
 *
 * This function converts a string to an integer while checking for potential
 * errors. If the string starts with a '+', it is ignored, and the conversion
 * continues. If any non-numeric character is encountered during conversion,
 * the function returns -1 to indicate an error. If the converted number
 * exceeds INT_MAX, it also returns -1.
 *
 * @s: The string to be converted to an integer.
 * @Return: The converted number on success, or -1 on error.
 */
int _erratoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;

	if (*s == '+')
		s++;  /* TODO: why does this make main return 255? */
	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}
