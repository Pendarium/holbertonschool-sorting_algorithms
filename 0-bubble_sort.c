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
size_t index = 0;
/* Variable pour parcourir les passes du tri */
size_t count = 0;
/* Variable pour parcourir les éléments à comparer */
int temp;
/* Variable temporaire pour l'échange des valeurs */

	if (array == NULL || size < 2)
	/* Vérifie si le tableau est valide et a au moins deux éléments */
		return;

	for (index = 0; index < size - 1; index++)
	/* Boucle externe : effectue plusieurs passes sur le tableau */
	{
		for (count = 0; count < size - index - 1; count++)
		/* Boucle interne : compare les éléments adjacents */
		{
			if (array[count] > array[count + 1])
			/* Si l'élément courant est plus grand que le suivant */
			{
				temp = array[count];
				/* Sauvegarde temporaire de la valeur courante */
				array[count] = array[count + 1];
				/* Échange la valeur suivante vers la position courante */
				array[count + 1] = temp;
				/* Place la valeur temporaire dans la position suivante */
				print_array(array, size);
				/* Affiche le tableau après chaque échange */
			}
		}
	}
}
