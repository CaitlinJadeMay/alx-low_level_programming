#include "lists.h"

/**
* delete_nodeint_at_index - Write a function that deletes the
* node at index index of a listint_t linked list
* @head: first element
* @index: node to del
*
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *shaun = *head;
listint_t *life = NULL;
unsigned int fo = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(shaun);
return (1);
}

while (fo < index - 1)
{
if (!shaun || !(shaun->next))
return (-1);
shaun = shaun->next;
fo++;
}


life = shaun->next;
shaun->next = life->next;
free(life);

return (1);
}
