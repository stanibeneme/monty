#include "monty.h"

/**
 * is_int - it checks if a string or queue is valid for atoi
 * @str: the string or queue
 * Project by Stanley Ibeneme
 * Return: 1 for true, 0 for false
 */
int is_int(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (*str == '-')
		i++;
	for (; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
