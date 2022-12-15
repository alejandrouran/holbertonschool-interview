#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - number into a sorted singly linked list.
 * @head: head
 * @str: number
 * Return: NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node;
    listint_t *t = *head;

    node = malloc(sizeof(listint_t));

    if (node)
    {
        node->n = number;
        node->next = NULL;
        if (*head == NULL || (*head)->n >= node->n)
        {
            node->next = *head;
            *head = node;
        }
        else
        {
            while (t->next && t->next->n < node->n)
            {
                t = t->next;
            }
            node->next = t->next;
            t->next = node;
        }
        return (node);
    }
    return (NULL);
}