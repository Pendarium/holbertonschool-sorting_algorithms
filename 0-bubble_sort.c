#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers par ordre croissant
 *               en utilisant l'algorithme de tri à bulles
 * @array: Le tableau d'entiers à trier
 * @size: La taille du tableau
 *
 * Description: Affiche le tableau après chaque échange de deux éléments.
 */

void bubble_sort(int *array, size_t size)
{
size_t index;
size_t count;
int temp;

if (array == NULL || size < 2)
/* Vérifie que le tableau existe et qu'il a au moins deux éléments */
return;

	for (index = 0; index < size - 1; index++)
	/* Boucle externe : effectue plusieurs passes dans le tableau */
	{
		for (count = size - 1; count > index; count--)
		/* Boucle interne : compare les éléments adjacents en remontant */
		{
			if (array[count] < array[count - 1])
			/* Si les éléments sont dans le mauvais ordre, on les échange */
			{
			temp = array[count];
			/* Stocke temporairement l'élément actuel */
			array[count] = array[count - 1];
			/* Déplace l'élément précédent vers la droite */
			array[count - 1] = temp;
			/* Replace l'élément temporaire à gauche */

			print_array(array, size);
			/* Affiche le tableau après chaque échange */
			}
		}
	}
}
