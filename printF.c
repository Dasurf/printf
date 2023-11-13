#include "main.h"

/**
 * _printf - A function that prints formatted characters
 *
 * @format: the format of string to be printed
 *
 * Return: returns length of string printed
*/

int _printf(const char *format, ...)
{
	va_list restArgs;
	int num_of_char = 0;

	if (format == NULL)
		return (-1);


	va_start(restArgs, format);


	while (*format)
	{
		if (*format != '%')
		{
			printChar(*format, &num_of_char);
		}
		else
		{
			format++;
			if (*format != '\0')
			{
				checkFormatSpec(*format, restArgs, &num_of_char);
			}
			else
			{
				printChar(*format, &num_of_char);
			}
		}
		format++;
	}

	va_end(restArgs);
	return (num_of_char);
}
