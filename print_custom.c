#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
/**
 * print_bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
<<<<<<< HEAD
 * values in hexadecimal (upper case - always 2 characters)
=======
 * value in hexadecimal (upper case - always 2 characters)
>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_bigS(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);
<<<<<<< HEAD
	(void)f;
	if (!s)
		return (_puts("(null)"));
=======

	(void)f;
	if (!s)
		return (_puts("(null)"));

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
<<<<<<< HEAD
			count += 2
				res = convert(s[i], 16, 0);
=======
			count += 2;
			res = convert(s[i], 16, 0);
>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
<<<<<<< HEAD
=======

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
/**
 * print_rev - to print a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);
<<<<<<< HEAD
	(void)f;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
=======

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
/**
 * print_rot13 - to print a string using rot13
 * @l: to list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);
<<<<<<< HEAD
=======

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
<<<<<<< HEAD
	return (j);
}
=======

	return (j);
}

>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
