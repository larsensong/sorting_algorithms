#include <stdio.h>

#include "sort.h"



/**
 *
 *  * print_list - Prints a list of integers in a data array
 *
 *   *
 *
 *    * @list: The list of a  to be printed
 *
 *     */

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
