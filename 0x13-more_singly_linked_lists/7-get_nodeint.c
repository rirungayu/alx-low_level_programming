#include "lists.h"

/**
* get_nodeint_at_index - get nth node
* @head: first node
* @index: index to search
* Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}

	if (i < index)
		return (NULL);

	return (temp);

}
