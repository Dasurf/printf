#include "main.h"

void print_string(const char *str, int *num_of_char) {
    int len = strlen(str);
    write(1, str, len);
    (*num_of_char) += len;
}