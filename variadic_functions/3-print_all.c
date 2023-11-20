#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - prints numbers
 * @list: type
 * Return: nothing
*/
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_char - prints characters
 * @list: type
 * Return: nothing
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_float - prints floats
 * @list: type
 * Return: nothing
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - prints strings
 * @list: type
 * Return: nothing
*/
void print_str(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i= 0, j = 0;
	va_list ap;
	choice list[] =
	{
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{"\0", NULL}
	};

	va_star(ap, format);
	while (list[j].letter != NULL)

