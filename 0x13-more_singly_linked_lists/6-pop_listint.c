#include "lists.h"

/**
* pop_listint - remove head
* @head: first node
* Return: value iof the node
*/

int pop_listint(listint_t **head)
{
listint_t *node = *head;
int n;

if (head)
{
n = node->n;
*head = node->next;
free(node);
}

return (n);
}
