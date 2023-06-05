#include "lists.h"

/**
* sum_listint - Write a function that returns the sum of
* all the data (n) of a listint_t linked list
* @head: first node
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *cait = head;

while (cait)
{
sum += cait->n;
cait = cait->next;
}

return (sum);
}
