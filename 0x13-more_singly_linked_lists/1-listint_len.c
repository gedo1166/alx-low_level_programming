#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: the linked list of type listint_t to traverse
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (num);
}