#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
<<<<<<< HEAD
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
=======
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
>>>>>>> 4199edf09f76ed61294d62d50100b9c9b7be3b19
 * Return: 1 if a flag has been turned on, 0 otherwise
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
<<<<<<< HEAD
=======

>>>>>>> 4199edf09f76ed61294d62d50100b9c9b7be3b19
	return (i);
}
