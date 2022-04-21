#include "main.h"

/**
 * print_string - to loop through a string and prints
 * every character
 * @l: to va_list arguments from _printf
 * @f: pointer to the struct flags that determines
<<<<<<< HEAD
 * ifs a flag is passed to _printf
=======
 * if a flag is passed to _printf
>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);
<<<<<<< HEAD
=======

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - to print a character
 * @l: to va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
