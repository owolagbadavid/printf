#include "main.h"

/**
 * reset_flags - restes to 0
 *
 * @flag: flag
 *
 *
 */
void reset_flags(flags_t *flag)
{
	flag->space = 0;
	flag->plus = 0;
	flag->hash = 0;
	flag->longer = 0;
	flag->shorter = 0;
	flag->width = 0;
	flag->precision = 0;
}

/**
* handle_len_sign - stuff
*
* @flag: pointer
* @arg: arg
* Return: int
*/
long int handle_len_sign(va_list arg, flags_t *flag)
{
	long int num;

	if (flag->shorter == 1 && flag->longer == 0)
		num = (short int)va_arg(arg, int);
	else if (flag->longer == 1)
		num = (long int)va_arg(arg, long int);
	else
		num = va_arg(arg, int);

	return (num);
}
