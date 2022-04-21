#include "main.h"

/**
 * convert - to convert number and base into string
 * @num: for input number
 * @base: input base
 * @lowercase: to flag if hexa values need to be lowercase
 * Return: result string
 */
<<<<<<< HEAD

=======
>>>>>>> c955aef981c25c35e49297dccf7208d566074af5
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
