#include "main.h"
/**
 * malloc_checked - Function that allocates memory
 * @b: Size of memory to be reserved
 * Return: Nothing(void)
 */

void *malloc_checked(unsigned int b)
{
	int *reserved_space = malloc(b);

	return (reserved_space);
}

