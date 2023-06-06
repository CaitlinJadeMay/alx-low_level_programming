#include "lists.h"

/**
* find_listint_loop - Write a function that finds the loop in a linked list
* @head: link to search for
*
* Return: where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *jane = head;
listint_t *john = head;

if (!head)
return (NULL);

while (jane && john && john->next)
{
john = john->next->next;
jane = jane->next;
if (john == jane)
{
jane = head;
while (jane != john)
{
jane = jane->next;
john = john->next;
}
return (john);
}
}

return (NULL);
}
