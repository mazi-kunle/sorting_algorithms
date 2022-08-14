#ifndef SORT_H_
#define SORT_H_
#include <stdio.h>

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void sort_insert(listint_t **list, listint_t *ptr);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int partition(int *arr, int low, int pivot_index, int size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *array, int low, int high, size_t size);
void swap(int *a, int *b);
void quick_s(int *array, int lo, int hi, size_t size);
#endif
