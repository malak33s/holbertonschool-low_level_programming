#include "lists.h"

/**
 * free_dlistint - write a function that frees a list.
 * @head: pointer to list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
