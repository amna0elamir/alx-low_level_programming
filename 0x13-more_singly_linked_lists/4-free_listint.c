#include "lists.h"

/**
 * free_listint - func that frees list
 * @head: pointer
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(head);
}
