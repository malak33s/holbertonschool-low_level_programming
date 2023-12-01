#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 * @head: head of list.
 * @index: index of the node should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dlt, *t = *head;
	unsigned int i;

	if (t == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(t);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}

	dlt = dlt->next;
	t->next = dlt->next;
	if (dlt->next != NULL)
		dlt->next->prev = t;
	free(dlt);
	return (1);
}
