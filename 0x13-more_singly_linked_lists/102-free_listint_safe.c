#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
    listp_t *temp;
    listp_t *curr;

    if (head != NULL)
    {
        curr = *head;
        while ((temp = curr) != NULL)
        {
            curr = curr->next;
            free(temp);
        }
        *head = NULL;
    }
}

/**
 * free_listint_safe - frees a linked list.
 * @head: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
    size_t nnodes = 0;
    listp_t *hptr = NULL, *new, *add;
    listint_t *curr;

    while (*head != NULL)
    {
        new = malloc(sizeof(listp_t));

        if (new == NULL)
            exit(98);

        new->p = (void *)*head;
        new->next = hptr;
        hptr = new;

        add = hptr;

        while (add->next != NULL)
        {
            add = add->next;
            if (*head == add->p)
            {
                *head = NULL;
                free_listp2(&hptr);
                return (nnodes);
            }
        }

        curr = *head;
        *head = (*head)->next;
        free(curr);
        nnodes++;
    }

    *head = NULL;
    free_listp2(&hptr);
    return (nnodes);
}
