#include "main.h"

/**
 * printStr - A function that prints strings
 *
 * @str: The string to print
 * @num_of_char: the number of characters in the string
 *
 * Return: nothing
*/

void printStr(const char *str, int *num_of_char)
{
	int len = strlen(str);

	write(1, str, len);
	(*num_of_char) += len;
}
