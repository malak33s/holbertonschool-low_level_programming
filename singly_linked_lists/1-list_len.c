#include "lists.h"

/**
* list_len - function that count all element of a list
*@h: input of start counting
*/

size_t list_len(const list_t *h)
{
    size_t elem = 0;

    while (h != NULL)
    {
        elem++;
        h = h->next;
    }
    return (elem);
}
