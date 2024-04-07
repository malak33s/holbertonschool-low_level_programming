#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth node of a list
 *@head: header list
 *@index: index of the node
 *
 *Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *newnd;
	unsigned int enie = 0;

	newnd = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (newnd != NULL)
	{
		if (enie == index)
		{
			return (newnd);
		}
		enie++;
		newnd = newnd->next;
	}
	return (NULL);
}
