#include"main.h"
/**
 * swap_int - Swaps the int(s)
 * @a: first variable we are swapping
 * @b: second variable we are swapping
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
		*a = *b;
	*b = temp;
}
