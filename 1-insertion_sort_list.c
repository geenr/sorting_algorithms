#include <stdio.h>
#include "sort.h"

/**
 * node_swapp - Swap two nodes in a doubly-linked list.
 * @hd: pointer to the head of the doubly-linked list.
 * @nodeA: pointer to the first node to swap.
 * @nodeB: The second node to swap.
 */

void node_swapp(listint_t **hd, listint_t **nodeA, listint_t *nodeB)
{
	(*nodeA)->next = nodeB->next;
	if (nodeB->next != NULL)
		nodeB->next->prev = *nodeA;
	nodeB->prev = (*nodeA)->prev;
	nodeB->next = *nodeA;
	if ((*nodeA)->prev != NULL)
		(*nodeA)->prev->next = nodeB;
	else
		*hd = nodeB;
	(*nodeA)->prev = nodeB;
	*nodeA = nodeB->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using the insertion sorting
 * @list: pointer to the head of a doubly-linked list
 *
 * Description: Prints the list in an ascending order
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *a, *key, *b;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (a = (*list)->next; a != NULL; a = b)
	{
		b = a->next;
		key = a->prev;
		while (key != NULL && a->n < key->n)
		{
			node_swapp(list, &key, a);
			print_list((const listint_t *)*list);
		}
	}
}
