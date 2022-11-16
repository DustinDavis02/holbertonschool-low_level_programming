#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of list
 * @head: pointer to head of node
 * @n: node data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_node, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp_node = *head;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = new;
	new->prev = temp_node;

	return (new);
}
