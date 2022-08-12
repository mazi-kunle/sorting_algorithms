#include "sort.h"

/**
 * insertion_sort_list- a function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort
 * algorithm.
 *
 * @list: list to sort.
 *
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *curr_next;

	curr = *list;
	if (curr == NULL)
	{
		return;
	}
	while (curr->next)
	{
		curr_next = curr->next;
		sort_insert(list, curr->next);
		curr = curr_next;
	}
}

/**
 * sort_insert- swap two nodes.
 * @list: head of the list.
 * @ptr: node.
 *
*/
void sort_insert(listint_t **list, listint_t *ptr)
{
	listint_t *temp, *prev_temp, *ptr_next, *prev;

	temp = ptr->prev;
	while (temp)
	{
		prev_temp = temp->prev;
		if (temp->n > ptr->n)
		{
			prev = temp->prev;
			ptr_next = ptr->next;
			temp->next = ptr_next;
			ptr->next = temp;
			temp->prev = ptr;
			if (ptr_next != NULL)
				ptr_next->prev = temp;
			ptr->prev = prev;
			if (prev == NULL)
			{
				*list = ptr;
			}
			else
			{
				prev->next = ptr;
			}
			print_list(*list);
		}
		temp = prev_temp;

	}
}
