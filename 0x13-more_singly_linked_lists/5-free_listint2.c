#include "lists.h"

/**
* free_listint2 - frees a list
* @head: head of the list
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

while (head)
{
temp = *head;
*head = temp->next;
free(head);
}
}
