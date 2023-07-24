#include "main.h"

/**
* print_address - prints string
* @arg: args from _printf
* @flag: pointer to flag
* Return: int
*/
int print_address(va_list arg, flags_t __attribute__((__unused__)) *flag)
{
	char *str;
	unsigned long int p = va_arg(arg, unsigned long int);

	int count = 0;


	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 0);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
