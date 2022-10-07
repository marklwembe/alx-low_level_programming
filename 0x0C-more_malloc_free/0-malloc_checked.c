#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory
 * @b: Size of memory to be reserved
 * Return: Nothing(void)
 */

void *malloc_checked(unsigned int b)
{
	int *reserved_space = malloc(b, NULL);
	return (reserved_space);
}
