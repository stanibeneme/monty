#include "monty.h"

/**
 * swap - this swaps the top two elements
 * @stack: the queue or stack
 * @line_number: the line number
 * Project by Stanley Ibeneme
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int swapper;

	if ((*stack) == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swapper = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swapper;
}
