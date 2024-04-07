#include "lists.h"

/**
 * add_dnodeint_end - create a function that adds a new
 * node at the end of a list
 * @head: header list
 * @n: element
 *
 * Return: new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnd, *temp;


	temp = (*head);

	newnd = malloc(sizeof(dlistint_t));

	if (newnd == NULL)
	{
		return (NULL);
	}
	newnd->n = n;
	newnd->next = NULL;

	if ((*head) == NULL)
	{
		*head = newnd;
		newnd->prev = NULL;

		return (newnd);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnd;
	newnd->prev = temp;

	return (newnd);

}
