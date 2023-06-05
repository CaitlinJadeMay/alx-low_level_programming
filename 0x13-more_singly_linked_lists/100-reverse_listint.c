#include "lists.h"

/**
* reverse_listint - Write a function that
* reverses a listint_t linked list
* @head: the first node
*
* Return: first node
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prior = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prior;
prior = *head;
*head = next;
}

*head = prior;

return (*head);
}
