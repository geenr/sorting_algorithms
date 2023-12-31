#ifndef _SORT_H_
#define _SORT_H_

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

/*prototypes*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void swapp_integer(int *first, int *sec);
void node_swapp(listint_t **hd, listint_t **nodeA, listint_t *nodeB);
void recursive_quicksort(int *array, size_t size, int p_left, int p_right);
int lomuto_partition_scheme(int *array, size_t size, int p_left, int p_right);

#endif
