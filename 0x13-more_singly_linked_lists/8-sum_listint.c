#include "lists.c"

/**
* sum_intlist - sum of all the data
* @head: head of the list
* Return: return sum or zero
*/

int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;

if (head == NULL)
return (0);

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
