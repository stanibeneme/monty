#include "monty.h"

/**
 * add - it adds the top two elements of the queue
 * @stack: the stack or queue
 * @line_number: the present line number
 * Project by Stanley Ibeneme
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int summ;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	summ = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = summ;
}
