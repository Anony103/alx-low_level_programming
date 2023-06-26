#include "main.h"

/**
 * swap_int-swaping 2 integer using a pointer
 * @a:integer
 * @b:intger
 * return:void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
