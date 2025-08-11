#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Nodo de una lista doblemente enlazada
 *
 * @n: Numero entero 'n' almacenado en el nodo
 * @prev: Puntero al elemento anterior de la lista
 * @next: Puntero al siguiente elemento de la lista
 *
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Funciones dadas para imprimir */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Prototipos de funciones de ordenamiento del proyecto */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int Lomuto(int *array, size_t size, int low, int high);
void recursive_quicksort(int *array, size_t size, int low, int high);


#endif /* SORT_H */
