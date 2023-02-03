#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: head of list
 * Return: 0 if no cycle, 1 if cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *h, *t = list;

	if (!list)
		return (0);

	h = list->next;
	while (h)
	{
		if (h->next)
			h = h->next->next;
		else
			h = h->next;

		t = t->next;
		if (h == t)
			return (1);
	}
	return (0);
}
