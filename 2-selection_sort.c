
#include "sort.h"

/**
 * selection_sort - Ordena un array de enteros en orden ascendente
 * usando el algoritmo "Selection Sort"
 *
 * @array: Puntero al primer elemento del array
 * @size: Numero de elementos en el @array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min_ind;
	int temp;

	/* No necesita ser ordenado si el "size" es menor a 2*/
	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min_ind = x;

		/* Busca el indice del valor mas pequeno */
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min_ind])
				min_ind = y;
		}
		/* Si encontramos un valor menor, intercambiamos  */
		if (min_ind != x)
		{
			temp = array[x];
			array[x] = array[min_ind];
			array[min_ind] = temp;
			/* Mostrar array despues del intercambio */
			print_array(array, size);
		}

	}
}
