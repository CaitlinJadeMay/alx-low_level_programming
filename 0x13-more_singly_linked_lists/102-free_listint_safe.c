#include "lists.h"

/**
* free_listint_safe - Write a function that frees a listint_t list
* @h: first node
*
* Return: number of elements in the free list
*/
size_t free_listint_safe(listint_t **h)
{
size_t joes = 0;
int sh;
listint_t *cai;

if (!h || !*h)
return (0);

while (*h)
{
sh = *h - (*h)->next;
if (sh > 0)
{
cai = (*h)->next;
free(*h);
*h = cai;
joes++;
}
else
{
free(*h);
*h = NULL;
joes++;
break;
}
}

*h = NULL;

return (joes);
}
