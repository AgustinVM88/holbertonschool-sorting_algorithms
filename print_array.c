#include <stdio.h>
#include "sort.h"

/**
 * print_array - Imprime un array de enteros
 *
 * @array: Array a imprimir
 * @size: Numero de elementos en el @array
 *
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
