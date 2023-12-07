#include "lists.h"

/**
 *  * dlistint_len - count the number of nodes in the linked list
 *   * @h: pointer to the beginning of a linked list
 *    * Return: number of nodes
 *     */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
