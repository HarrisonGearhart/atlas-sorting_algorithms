#include "sort.h"
/**
 * swap_nodes - swap two nodes in a listint_t doubly linked list
 * @h: A pointer to the head of the doubly linked list
 * @n1: pointer to first node being swapped
 * @n2: pointer to second node to swap
 * Return: Void
*/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using the insertion algorithm
 * @list: pointer to the head of doubly linked list
 * Return: Void. Prints the list after each swap
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swap_nodes(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}
