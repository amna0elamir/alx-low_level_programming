#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: pointr
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	node = *head;
	while (*head)
	{
		node = *head;
		(*head) = (*head)->next;
		free(node);
	}
	*head = NULL;
}
