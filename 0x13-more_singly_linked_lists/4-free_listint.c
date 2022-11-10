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
if (head->n)
free(head->n);

temp = head;
head = head->next;
free(temp);
}
