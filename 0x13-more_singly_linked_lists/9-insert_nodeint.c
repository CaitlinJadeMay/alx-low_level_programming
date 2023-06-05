#include "lists.h"

/**
* insert_nodeint_at_index - Write a function
* that inserts a new node at a given position
* @head: first node
* @idx: index where the new node is added
* @n: new node
*
* Return: new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int sher;
listint_t *cait;
listint_t *shau = *head;

cait = malloc(sizeof(listint_t));
if (!cait || !head)
return (NULL);

cait->n = n;
cait->next = NULL;

if (idx == 0)
{
cait->next = *head;
*head = cait;
return (cait);
}

for (sher = 0; shau && sher < idx; sher++)
{
if (sher == idx - 1)
{
cait->next = shau->next;
shau->next = cait;
return (cait);
}
else
shau = shau->next;
}

return (NULL);
}
