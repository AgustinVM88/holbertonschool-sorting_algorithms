#include <stdio.h>
#include "sort.h"

/**
 * print_list - Imprime una lista doblemente enlazada de enteros
 *
 * @list: Puntero al inicio de la lista
 *
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
