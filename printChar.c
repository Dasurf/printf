#include "main.h"

void printChar(const char character, int *num_of_char) {
    write(1, &character, 1);
    (*num_of_char)++;
}