#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string
 * Return: int
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
