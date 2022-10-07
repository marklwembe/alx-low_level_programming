#include "main.h"
/**
 * malloc_checked - Function that allocates memory
 * @b: Size of memory to be reserved
 * Return: Nothing(void)
 */

void *malloc_checked(unsigned int b)
{
	void *reserved_space;

	reserved_space =  malloc(b);

	if (reserved_space == NULL)
		exit(98);
	return (reserved_space);
}

