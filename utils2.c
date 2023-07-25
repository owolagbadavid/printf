#include "main.h"
/**
* _strlen - stuff
*
* @s: pointer
* Return: int
*/
int _strlen(char *s)
{


	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
* handle_len - stuff
*
* @flag: pointer
* @arg: arg
* Return: int
*/
unsigned long int handle_len(va_list arg, flags_t *flag)
{
	unsigned long int num;

	if (flag->shorter == 1 && flag->longer == 0)
		num = (unsigned short int)va_arg(arg, unsigned int);
	else if (flag->longer == 1)
		num = (unsigned long int)va_arg(arg, unsigned long int);
	else
		num = va_arg(arg, unsigned int);

	return (num);
}

/**
* handle_hash - stuff
*
* @flag: pointer
* @str: arg
* Return: int
*/
int handle_hash(char *str, flags_t *flag)
{
	int count = 0;

	if (flag->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}
