#include "monty.h"
/**
 * rotr - this rotates to the right
 * @stack: the monty queue or stack
 * @line_number: the line number
 * Project by Stanley Ibeneme
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int lastVal;

	UNUSED(line_number);
	if ((*stack) != NULL)
	{
		tmp = *stack;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		lastVal = tmp->n;
		while (tmp->prev != NULL)
		{
			tmp->n = tmp->prev->n;
			tmp = tmp->prev;
		}
		tmp->n = lastVal;
	}
}
