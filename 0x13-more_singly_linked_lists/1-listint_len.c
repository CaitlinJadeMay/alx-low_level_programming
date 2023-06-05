#include "lists.h"

/**
* listint_len - Write a function that returns the
* number of elements in a linked listint_t list
* @h: linked list of type listint_t to traverse
*
* Return: total nodes cay
*/
size_t listint_len(const listint_t *h)
{
size_t cay = 0;

while (h)
{
cay++;
h = h->next;
}

return (cay);
}
