#include "lists.h"
#include <string.h>
/**
* add_node - adds a new node at the beginning
* @head: head of the list
* @str: to be duplicated
* Return: address of new node
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);
else
{
new_node->str = strdup(str);
new_node->next = *head;
new_node->len = strlen(str);
*head = new_node;
}

return (new_node);
}
