#include "lists.h"

/**
* free_list - create a function that free a list.
* @head: pointer to list.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
