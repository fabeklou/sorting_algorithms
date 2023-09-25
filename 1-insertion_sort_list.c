#include "sort.h"

void nodes_swaper(listint_t **head, listint_t **node_a, listint_t *node_b);

/**
 * insertion_sort_list - sort a doubly linked list using
 * insertion sort algorithm
 *
 * @list: pointer to the pointer to the head node
 * of the linked list to sort
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *main, *second;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (main = (*list)->next; main; main = temp)
	{
		temp = main->next;
		second = main->prev;

		while (second != NULL && (main->n < second->n))
		{
			nodes_swaper(list, &second, main);
			print_list(*list);
		}
	}
}

/**
 * nodes_swaper - swaps two nodes in a doubly linked list
 *
 * @head: pointer to the pointer to the head node
 * @node_a: pointer to the pointer to the first node to swap
 * @node_b: pointer to the second node to swap
 *
 * Return: Nothing
 */
void nodes_swaper(listint_t **head, listint_t **node_a, listint_t *node_b)
{
	(*node_a)->next = node_b->next;

	if (node_b->next)
		node_b->next->prev = *node_a;

	node_b->prev = (*node_a)->prev;
	node_b->next = *node_a;

	if ((*node_a)->prev)
		(*node_a)->prev->next = node_b;
	else
		*head = node_b;

	(*node_a)->prev = node_b;
	*node_a = node_b->prev;
}
