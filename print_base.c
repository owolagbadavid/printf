#include "main.h"

/**
* print_hex - prints number in hexadecimal
* @arg: va_list arg
* @flag: pointer flag
* Return: number of chars printed
*/
int print_hex(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (flag->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
* print_hex_upper - prints number in hexadecimal upper
* @arg: va_list arg
* @flag: pointer flag
* Return: number of chars printed
*/
int print_hex_upper(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (flag->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
* print_binary - prints number in binary
* @arg: va_list arg
* @flag: pointer flag
* Return: number of chars printed
*/
int print_binary(va_list arg, flags_t __attribute__((__unused__)) *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}

/**
* print_octal - prints number in octal
* @arg: va_list arg
* @flag: pointer flag
* Return: number of chars printed
*/
int print_octal(va_list arg, flags_t *flag)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (flag->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
