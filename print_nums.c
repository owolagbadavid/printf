#include "main.h"

/**
* print_int - prints an integer
* @arg: va_list of args
* @flag: pointer to flag
* Return: int
*/
int print_int(va_list arg, flags_t *flag)
{
	int n = va_arg(arg, int);
	int res = count_digit(n);

	if (flag->space == 1 && flag->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (flag->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
	res++;
	print_number(n);
	return (res);
}

/**
* print_unsigned - prints unsigned int
* @arg: va_list of args
* @flag: pointer flag
* Return: int
*/
int print_unsigned(va_list arg, flags_t __attribute__((__unused__)) *flag)
{
	unsigned int u = va_arg(arg, unsigned int);
	char *str = convert(u, 10, 0);

	return (_puts(str));
}

/**
* print_number - prints num
* @n: integer to be printed
*/
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
