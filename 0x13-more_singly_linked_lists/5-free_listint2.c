#include "lists.h"

/**
* free_listint2 - Write a function that frees a listint_t list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *cait;

if (head == NULL)
return;

while (*head)
{
cait = (*head)->next;
free(*head);
*head = cait;
}

*head = NULL;
}
