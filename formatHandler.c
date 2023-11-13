#include "main.h"

/**
 * checkFormatSpec - A function that checks for
 *                         format specifiers and handles them
 *
 * @format: The format specifier character
 * @restArgs: The arguments passed to the specifiers
 * @num_of_char: the number of characters printed
 *
 * Return: nothing
*/

void checkFormatSpec(const char format, va_list restArgs, int *num_of_char)
{
	int num;

	if (format == 'c')
	{
		char arg = va_arg(restArgs, int);

		printChar(arg, num_of_char);
	}
	else if (format == 's')
	{
		char *str = va_arg(restArgs, char*);

		printStr(str, num_of_char);
	}
	else if (format == 'd' || format == 'i')
	{
		num = va_arg(restArgs, int);
		printNum(num, num_of_char, 10);
	}
	else if (format == 'o')
	{
		num = va_arg(restArgs, int);

		printNum(num, num_of_char, 8);
	}
	else if (format == 'x')
	{
		num = va_arg(restArgs, int);

		printNum(num, num_of_char, 16);
	}
	else
	{
		printChar(format, num_of_char);
	}
}
