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
	int num_of_char = 0;

	if (format != NULL)
	{
		va_list restArgs;

		va_start(restArgs, format);
		while (*format)
		{
			if (*format != '%')
			{
				write(1, format, 1);
				num_of_char++;
			}
			else
			{
				format++;
				if (*format != '\0')
				{
					if (*format == '%')
					{
						write(1, format, 1);
						num_of_char++;
					}

					if (*format == 'c')
					{
						char arg = va_arg(restArgs, int);

						write(1, &arg, 1);
						num_of_char++;
					}
					else if (*format == 's')
					{
						char *str = va_arg(restArgs, char*);
						int len = strlen(str);

						write(1, str, len);
					}
				}
				else
				{
					write(1, format, 1);
					num_of_char++;
				}
			}
			format++;
		}
	}
	else
	{
		return (-1);
	}
	return (num_of_char);
}
