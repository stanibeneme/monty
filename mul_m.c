#include "monty.h"

/**
 * multiply - it multiplies the top two elements of the stack.
 * @stack: the stack or queue
 * @line_number: the present line number
 *
 * Return: void
 */
void multiply(stack_t **stack, unsigned int line_number)
{
	int mul;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	mul = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = mul;
}
