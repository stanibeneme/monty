#include "monty.h"

/**
 * sub - this subtracts the top elements of the stack.
 * @stack: the queue or stack
 * @line_number: the line number
 * project by Stanley Ibeneme
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int diff;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	diff = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = diff;
}
