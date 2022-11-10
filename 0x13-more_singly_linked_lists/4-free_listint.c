#include "lists.h"

/**
* free_listint - frees a list
* @head: head of the list
* Return: void
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
temp = head;
}
}
