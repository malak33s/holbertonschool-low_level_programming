#include "lists.h"

/**
* add_node_end - function that add a nex node aat the list
* @head: head of list
* @str: pointer to string
* Return: address of the new element
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	temp = (*head);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
		new->str = strdup(str);
		new->len = len;
		new->next = (NULL);

	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = new;

	return (new);
}
