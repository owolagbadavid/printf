#include "main.h"

/**
* print_int - prints an integer
* @arg: va_list of args
* @flag: pointer to flag
* Return: int
*/
int print_int(va_list arg, flags_t *flag)
{
	long int num = handle_len_sign(arg, flag);
	int res;

	res = count_digit(num);
	if (flag->space == 1 && flag->plus == 0 && num >= 0)
		res += _putchar(' ');
	if (flag->plus == 1 && num >= 0)
		res += _putchar('+');
	if (num <= 0)
	res++;
	print_number(num);
	return (res);
}

/**
* print_unsigned - prints unsigned int
* @arg: va_list of args
* @flag: pointer flag
* Return: int
*/
int print_unsigned(va_list arg, flags_t *flag)
{
	unsigned long int num = handle_len(arg, flag);
	char *str = convert(num, 10, 0), *replc;
	int count = 0, i;

	if (flag->width - _strlen(str) > 0)
	{
		{
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str)); i++)
				replc[i] = ' ';
			for (i = 0; i < _strlen(str); i++)
				replc[i + flag->width - _strlen(str)] = str[i];
		}
	}
	else
	{
		return (_puts(str));
	}
	count += _puts(replc);
	free(replc);
	return (count);
}

/**
* print_number - prints num
* @n: integer to be printed
*/
void print_number(long int n)
{
	unsigned long int n1;

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
