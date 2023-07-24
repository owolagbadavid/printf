#include "main.h"

/**
* print_string - prints string
* @arg: args from _printf
* @flag: pointer to flag
* Return: int
*/
int print_string(va_list arg, flags_t __attribute__((__unused__)) *flag)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
* print_char - prints char
* @arg: args from _printf
* @flag: pointer to flag
* Return: int
*/
int print_char(va_list arg, flags_t __attribute__((__unused__)) *flag)
{
	_putchar(va_arg(arg, int));
	return (1);
}
