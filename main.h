#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void printChar(const char character, int *num_of_char);
void printStr(const char *str, int *num_of_char);
int _printf(const char *format, ...);
void printNum(int num, int *num_of_char, int base);
void checkFormatSpec(const char format, va_list restArgs, int *num_of_char);

#endif /* MAIN_H */
