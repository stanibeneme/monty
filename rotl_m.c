#include "monty.h"
/**
 * rotl - this rotates to the left
 * @stack: the monty queue stack
 * @line_number: the line number
 * project by Stanley Ibeneme
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int firstVal;

	UNUSED(line_number);
	tmp = *stack;
	if (tmp)
		firstVal = tmp->n;
	while (tmp != NULL)
	{
		if (tmp->next)
			tmp->n = tmp->next->n;
		else
			tmp->n = firstVal;
		tmp = tmp->next;
	}
}
