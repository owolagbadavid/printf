#include "main.h"

/**
* print_hex - prints number in hexadecimal
* @arg: va_list arg
* @flag: pointer flag
* Return: number of chars printed
*/
int print_hex(va_list arg, flags_t *flag)
{
	unsigned long int num = handle_len(arg, flag);
	char *str = convert(num, 16, 0), *replc;
	int count = 0, i;

	if (flag->width - _strlen(str) > 0)
	{
		if (flag->hash == 1 && str[0] != '0')
		{
			if ((flag->width - _strlen(str) - 2) <= 0)
			{
				count += _puts("0x");
				count += _puts(str);
				return (count);
			}
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str) - 2); i++)
				replc[i] = ' ';
			replc[i++] = '0';
			replc[i] = 'x';
			for (i = 0; i < _strlen(str); i++)
				replc[(i + flag->width - _strlen(str))] = str[i];
			replc[flag->width] = '\0';
		}
		else
		{
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str)); i++)
				replc[i] = ' ';
			for (i = 0; i < _strlen(str); i++)
				replc[i + flag->width - _strlen(str)] = str[i];
			replc[flag->width] = '\0';
		}
	}
	else
	{
		return (handle_hash(str, flag));
	}
	count += _puts(replc);
	free(replc);
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
	unsigned long int num = handle_len(arg, flag);
	char *str = convert(num, 16, 1), *replc;
	int count = 0, i;

	if (flag->width - _strlen(str) > 0)
	{
		if (flag->hash == 1 && str[0] != '0')
		{
			if ((flag->width - _strlen(str) - 2) <= 0)
			{
				count += _puts("0X");
				count += _puts(str);
				return (count);
			}
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str) - 2); i++)
				replc[i] = ' ';
			replc[i++] = '0';
			replc[i] = 'X';
			for (i = 0; i < _strlen(str); i++)
				replc[(i + flag->width - _strlen(str))] = str[i];
			replc[flag->width] = '\0';
		}
		else
		{
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str)); i++)
				replc[i] = ' ';
			for (i = 0; i < _strlen(str); i++)
				replc[i + flag->width - _strlen(str)] = str[i];
			replc[flag->width] = '\0';
		}
	}
	else
	{
		return (handle_hash_upper(str, flag));
	}
	count += _puts(replc);
	free(replc);
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
	unsigned long int num = va_arg(arg, unsigned int);
	char *str;

	str = convert(num, 2, 0);
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
	unsigned long int num = handle_len(arg, flag);
	char *str = convert(num, 8, 0), *replc;
	int count = 0, i;

	if (flag->width - _strlen(str) > 0)
	{
		if (flag->hash == 1 && str[0] != '0')
		{
			if ((flag->width - _strlen(str) - 1) <= 0)
			{
				count += _puts("0");
				count += _puts(str);
				return (count);
			}
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str) - 1); i++)
				replc[i] = ' ';
			replc[i++] = '0';
			for (i = 0; i < _strlen(str); i++)
				replc[(i + flag->width - _strlen(str))] = str[i];
			replc[flag->width] = '\0';
		}
		else
		{
			replc = (char *)malloc(flag->width + 1);
			for (i = 0; i < (flag->width - _strlen(str)); i++)
				replc[i] = ' ';
			for (i = 0; i < _strlen(str); i++)
				replc[i + flag->width - _strlen(str)] = str[i];
			replc[flag->width] = '\0';
		}
	}
	else
	{
		return (handle_hash_octal(str, flag));
	}
	count += _puts(replc);
	free(replc);
	return (count);
}
