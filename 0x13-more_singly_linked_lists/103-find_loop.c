#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * solocode
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortor, *har;

	tortor = har = head;
	while (tortor && har && har->next)
	{
		tortor = tortor->next;
		har = har->next->next;
		if (tortor == har)
		{
			tortor = head;
			break;
		}
	}
	if (!tortor || !har || !har->next)
		return (NULL);
	while (tortor != har)
	{
		tortor = tortor->next;

