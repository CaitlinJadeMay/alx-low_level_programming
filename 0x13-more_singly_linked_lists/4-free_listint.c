#include "lists.h"

/**
* free_listint - Write a function that frees a listint_t list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
listint_t *cait;

while (head)
{
cait = head->next;
free(head);
head = cait;
}
}
