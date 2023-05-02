#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 *
 * @h: A pointer to the linked list of type listint_t to print
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    if (h == NULL)
        return 0;

    printf("%d\n", h->n);
    return 1 + print_listint(h->next);
}
