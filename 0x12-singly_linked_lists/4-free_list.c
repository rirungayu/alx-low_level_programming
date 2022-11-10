#include "lists.h"

/**
* free_list - frees a list
* @head: head of the list
* Return: void
*/

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
if (head->str)
free(head->str);

temp = head;
head = head->next;
free(temp);
}
}
