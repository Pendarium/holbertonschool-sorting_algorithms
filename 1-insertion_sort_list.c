#include "sort.h"

/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 *						in ascending order using the insertion sort algorithm
 *
 * @list: The list containing the integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = (*list)->next;
	/* Commencer à partir du 2e nœud */
	listint_t *next_node;
	/* Pour garder le prochain nœud à traiter */
	listint_t *current;
	/* Nœud en cours de comparaison/déplacement */
	listint_t *prev;
	/* Nœud précédent (dans la partie triée) */
	listint_t *tmp;
	/* Pointeur temporaire pour le nœud avant prev */

	while (node != NULL)
	{
		current = node;
		/* On traite le nœud actuel */
		prev = current->prev;
		/* On regarde le nœud précédent */

		next_node = node->next;
		/* Sauvegarde du prochain nœud à traiter */

		while (prev != NULL && current->n < prev->n)
		{
			tmp = prev->prev;
			/* Sauvegarde du nœud avant prev */

			if (tmp != NULL)
				tmp->next = current;
				/* Relie tmp à current */
			current->prev = tmp;
			/* Met à jour le prev de current */

			prev->next = current->next;
			/* Détache prev de current */
			if (current->next != NULL)
				current->next->prev = prev;
				/* Met à jour le prev du nœud suivant */

			current->next = prev;
			/* Place prev après current */
			prev->prev = current;
			/* Relie prev à current */

			if (tmp == NULL)
				*list = current;
				/* Si current est en tête, mettre à jour *list */

			prev = current->prev;
			/* Continue à remonter dans la liste */

			print_list(*list);
			/* Affiche la liste après chaque échange */
		}

		node = next_node;
		/* Passe au nœud suivant à trier */
	}
}
