#include "lists.h"

/**
* pop_listint - Write a function that deletes the head node of a
* listint_t linked list, and returns the head node’s data (n)
* @head: first element
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int cay;

if (!head || !*head)
return (0);

cay = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (cay);
}
