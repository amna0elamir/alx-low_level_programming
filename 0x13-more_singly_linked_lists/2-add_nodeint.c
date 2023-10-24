#include "lists.h"

/**
 * add_nodeint - func that add node at begining
 * @head: integer
 * @n: int
 *
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	*head = new;
	return (new);
}
