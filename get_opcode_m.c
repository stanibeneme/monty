#include "monty.h"

/**
 * get_opcode - it gets the opcode and set push_arg if it's push
 * @string: the current line of code
 * Project by Stanley Ibeneme
 * Return: the opcode
 */
char *get_opcode(char *string)
{
	char *opcode;

	/** grab first argument **/
	opcode = strtok(string, "\n\t ");
	return (opcode);
}
