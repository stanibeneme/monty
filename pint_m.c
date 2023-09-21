#include "monty.h"

/**
 * pint - prints the value at the top of the stack followed by new line.
 * @stack: the stack or queue
 * @line_number: the current line number
 * Project by Stanley Ibeneme
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
