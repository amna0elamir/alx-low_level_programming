#include "lists.h"

/**
 * free_list - A function that frees element
 * @head: pointer 
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
