#include "lists.h"

/**
* add_nodeint_end - adds node at the end
* @head: head node
* @n: element to add
* Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current_node = *head;
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_head;
return (new_head);
}

while (current_node)
{
if (current_node->next)
current_node = current_node->next;
}
current_node->next = new_node;
new_node->n = n;
new_node->next = NULL;

return (current_node->next);
}
