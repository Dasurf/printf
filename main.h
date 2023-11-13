#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

void printChar(const char character, int *num_of_char);
void printStr(const char *str, int *num_of_char);
int _printf(const char *format, ...);


#endif /* MAIN_H */