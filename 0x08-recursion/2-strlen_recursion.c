#include "main.h"


/**
 * _print_rev_recursion - reverse
 * @s: pointer to string params
 *
 */


int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
