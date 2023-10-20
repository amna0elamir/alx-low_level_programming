#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node at begin
 * @head: pointer to a list_t
 * @str: pointer to string
 *
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int len = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
		add->len = length;
		add->str = strdup(str);
		add->next = *head;
		*head = add;
	}
	return (len);
}
