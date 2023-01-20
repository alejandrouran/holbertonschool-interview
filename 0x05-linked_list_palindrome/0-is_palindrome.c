#include "lists.h"

/**
 * list_length - linked list is a palindrome
 * @head: palindrome head
 * Return: 0
 */

int list_length(listint_t **head)
{
	int i;
	listint_t *current = *head;

	for (i = 0; current != NULL; i++)
		current = current->next;
	return (i);
}

/**
 * reversed - reversed a linked list
 * @head: head
 * Return: 0
 */

listint_t *reversed(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

/**
 * is_palindrome - singly linked list is a palindrome
 * @head: palindrome head
 * Return: 0
 */

int is_palindrome(listint_t **head)
{
	int length = list_length(head);
	int half_length = length / 2;
	int i, if_palindrome = 1;
	listint_t *reversed_head;
	listint_t *current = *head;
	listint_t *current_reversed;

	reversed_head = *head;
	for (i = 0; i < half_length; i++)
		reversed_head = reversed_head->next;
	if (length % 2 != 0)
		reversed_head = reversed_head->next;
	reversed_head = reversed(&reversed_head);
	current_reversed = reversed_head;
	current = *head;
	while (current_reversed != NULL)
	{
		if (current_reversed->n != current->n)
			if_palindrome = 0;
		current_reversed = current_reversed->next;
		current = current->next;
	}
	return (if_palindrome);
}
