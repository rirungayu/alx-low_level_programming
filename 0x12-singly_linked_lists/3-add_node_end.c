#include "lists.h"
#include <string.h>
/**
* add_node_end - adds a new node at the end
* @head: head of the list
* @str: to be duplicated
* Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *current_node = *head;

if (new_node == NULL)
return (NULL);
else
{
while (current_node)
{
if(current_node->next)
current_node = current_node->next;
}
new_node->str = strdup(str);
current_node->next = new_node;
new_node->len = strlen(str);
}

return (new_node);
}
