#include "main.h";

/*
* printf - produces output according to a format.
* @format: an inputs given to the function.
* Return: int 
*
*/

int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, result;

	result = 0;
	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			result += pull_print(format[i + 1], &ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			result++;
		}
	}
	va_end(ap);
	return (result);
}