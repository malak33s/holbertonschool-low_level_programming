#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the list.
 * @idx: index where the node should be added.
 * @n: data to insert.
 *
 * Return: adress of the new node or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *t = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		t = add_dnodeint(h, n);
		return (t);
	}

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
	{
		t = add_dnodeint_end(h, n);
		return (t);
	}

	new->n = n;
	new->prev = t;
	new->next = t->next;
	t->next->prev = new;
	t->next = new;

	return (new);
}
