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
