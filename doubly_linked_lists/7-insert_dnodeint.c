#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts
 * a new node at a given position
 * @h: pointer to the list.
 * @idx: index.
 * @n: data.
 *
 * Return: adress of the new node or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnd, *temp = *h;

	newnd = malloc(sizeof(dlistint_t));
	if (newnd == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}

	newnd->n = n;
	newnd->prev = temp;
	newnd->next = temp->next;
	temp->next->prev = newnd;
	temp->next = newnd;

	return (newnd);
}
