#include "sort.h"


/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *		in ascending order using the Insertion sort algorithm
 * @list: the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *current;
	listint_t *swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = *list;
	swap = node->next;
	while (swap)
	{
		current = swap->next;
		while (node != NULL && swap->n < node->n)
		{
			swap_node(swap, node);
			if (swap->prev == NULL)
				*list = swap;

			print_list(*list);
			node = swap->prev;
		}
		swap = current;
		if (swap != NULL)
			node = swap->prev;
	}
}


/**
 * swap_node - swaps two doubly linked list nodes.
 * @swap: first node
 * @node: second node
 */

void swap_node(listint_t *swap, listint_t *node)
{
	swap->prev = node->prev;
	node->next = swap->next;

	if (swap->next != NULL)
		swap->next->prev = node;
	if (swap->prev != NULL)
		swap->prev->next = swap;

	swap->next = node;
	node->prev = swap;
}
