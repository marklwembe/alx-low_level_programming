#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stddef.h>


void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif /* FUNCTION_H */