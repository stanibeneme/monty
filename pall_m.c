#include "monty.h"

/**
 * pall - this prints all values on the stack from the top of the queue
 * @stack: the stack or queue
 * @line_number: the current line number
 * by Stanley Ibeneme
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNUSED(line_number);

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
