#include "lists.h"

/**
* get_nodeint_at_index - Write a function that returns
* the nth node of a listint_t linked list
* @head: first node
* @index: index of the node to return
*
* Return: pointer to the node, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int sh = 0;
listint_t *temp = head;

while (temp && sh < index)
{
temp = temp->next;
sh++;
}

return (temp ? temp : NULL);
}
