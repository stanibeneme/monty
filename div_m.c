#include "monty.h"

/**
 * divide - this divides the top two elements of the stack or queue.
 * @stack: the stack or queue
 * @line_number: the present line number
 * project by Stanley Ibeneme
 * Return: void
 */
void divide(stack_t **stack, unsigned int line_number)
{
	int divs;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stdout, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	divs = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = divs;
}
