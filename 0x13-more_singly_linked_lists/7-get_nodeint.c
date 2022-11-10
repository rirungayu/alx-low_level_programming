#include "lists.h"

/**
* get_nodeint_at_index - get nth node
* @head: first node
* @index: index to search
* Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
unsigned int i = 0;


while ((i < index))
{
node = node->next;
i++;
}
return (node);
}


}
