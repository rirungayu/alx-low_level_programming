#include "lists.h"

/**
* listint_len - returns elements in a list
* @h: node
* Return: size of list
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
