#include "lists.h"

/**
* print_listint - Write a function that prints
* all the elements of a listint_t list
* @h: linked list of type listint_t to print
*
* Return: total nodes cay
*/
size_t print_listint(const listint_t *h)
{
size_t cay = 0;

while (h)
{
printf("%d\n", h->n);
cay++;
h = h->next;
}

return (cay);
}
