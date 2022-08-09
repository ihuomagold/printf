#include "main.h"

/**
 * get_print - selects the right printing function
 * @s: character that holds the conversion specifier
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'p', print_address},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big}
	};
	int flags = 10;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
