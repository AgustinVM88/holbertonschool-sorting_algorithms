
#include "sort.h"

/**
 * bubble_sort - Ordena un array de enteros en orden ascendente
 * usando el algoritmo "Bubble Sort"
 *
 * @array: Array a ordenar
 * @size: Numero de elementos en el @array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int temp, swapped;

	/* No necesita ser ordenado si el "size" es menor a 2*/
	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		swapped = 0;

		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				/*Intercambia elementos*/
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				swapped = 1;

				/* Imprime el array despues de cada swap*/
				print_array(array, size);
			}
		}
		/* Si no hubo swap, ya esta ordenado */
		if (swapped == 0)
			break;
	}
}
