#include "lists.h"

/**
 * free_list - A function that frees element
 * @head: pointer 
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
