#include "main.h"

/**
 * printNum - A function that prints integer values
 *
 * @num: The integer value to print
 * @num_of_char: the number of characters printed
 * @base: the base it should be printed in
 *
 * Return: nothing
*/

void printNum(int num, int *num_of_char, int base)
{
	char buffer[20]; /* Max digits assumed as 20 */
	int index = 0;
	int isNegative = 0;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int remainder = num % base;

		buffer[index++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		num /= base;
	}
	if (isNegative)
	{
		buffer[index++] = '-';
	}
	while (index > 0)
	{
		write(1, &buffer[--index], 1);
		(*num_of_char)++;
	}
}
