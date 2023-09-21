#include "monty.h"
/**
 * pstr - prints the queue or string of list
 * @stack: the monty stack
 * @line_number: line number to grab
 * project by Stanley Ibeneme
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	UNUSED(line_number);
	while (tmp != NULL && tmp->n != 0 && isprint(tmp->n))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
