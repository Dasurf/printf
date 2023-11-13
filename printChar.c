#include "main.h"

/**
 * printChar - A function that prints single characters
 *
 * @character: The character to print
 * @num_of_char: the number of character evaluates to 1
 *
 * Return: nothing
*/

void printChar(const char character, int *num_of_char)
{
	write(1, &character, 1);
	(*num_of_char)++;
}
