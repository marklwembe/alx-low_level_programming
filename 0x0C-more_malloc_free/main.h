#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int);
void _memcpy(void *dest, void *src, size_t n);
void _puts(char *str);
void print_int(unsigned long int n);
int _atoi(const char *s);

#endif /* MAIN_H */