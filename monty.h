#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define LINE_MAX 1024

/**
 * struct stack_s - the doubly linked list of a stack
 * @n: integer
 * @prev: points to the prev element of the stack
 * @next: points to the next element of the stack
 * Project by Stanley Ibeneme
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and function
 * @opcode: opcode
 * @f: the function to handle the opcode
 * Project by Stanley Ibeneme
 * Description: the opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int SQ;
instruction_t *parse_line(char *line);
void free_stack(stack_t *head);
char *get_opcode(char *string);
int is_int(char *str);
void push(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void divide(stack_t **stack, unsigned int line_number);
void multiply(stack_t **stack, unsigned int line_number);
void moddy(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
#endif
