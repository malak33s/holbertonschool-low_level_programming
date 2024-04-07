#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: head of list.
 * @index: index should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dele, *temp = *head;
	unsigned int num;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (num = 0; num < (index - 1); num++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	dele = temp->next;
	temp->next = dele->next;
	if (dele->next != NULL)
		dele->next->prev = temp;
	free(dele);
	return (1);
}
