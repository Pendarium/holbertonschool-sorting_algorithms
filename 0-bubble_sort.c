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
    size_t index, count;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (index = 0; index < size - 1; index++)
    {
        for (count = size - 1; count > index; count--)
        {
            if (array[count] < array[count - 1])
            {
                temp = array[count];
                array[count] = array[count - 1];
                array[count - 1] = temp;

                print_array(array, size);
            }
        }
    }
}
