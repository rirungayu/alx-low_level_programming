#include "lists.h"

/**
* pop_listint - remove head
* @head: first node
* Return: value iof the node
*/

int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (*head == NULL)
return (0);

node  = *head;
n = node->n;
*head = node->next;
free(node);

return (n);
}
