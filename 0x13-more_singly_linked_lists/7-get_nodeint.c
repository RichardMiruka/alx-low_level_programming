#include "lists.h"

/**
 * get_nodeint_at_index - returns  node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *temp = head;

    while (temp && count < index)
    {
        temp = temp->next;
        count++;
    }

    return (temp ? temp : NULL);
}
