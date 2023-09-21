#include "monty.h"

/**
 * free_stack - it frees a stack_t list.
 * @head: pointer to the head
 * Project by Stanley Ibeneme
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *next;

	if (!head)
		return;

	next = head;
	while (next)
	{
		head = next;
		next = head->next;
		free(head);
	}
}
