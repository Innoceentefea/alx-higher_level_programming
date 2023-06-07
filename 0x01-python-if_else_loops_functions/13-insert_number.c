#include "lists.h"

/**
 * insert_node - inserts node a num into a sorted singly linked list.
 * @head: list head
 * @number: num to store in the new node
 * Return: a pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);

	       }
		runner = runner->next
        }

     	new->next = node->NULL;
	node->next = new;

	return (new);
}
