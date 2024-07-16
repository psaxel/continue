#include "main.h"
/**
 * puts2 -print 0 2 4 6 8 10 ...
 *@str: array
 */


int i = 0, j = 0;

void _print_rev_recursion(char *s)
{
	if(s[j] != '\0')
	{
		i++;
		j++;
		_print_rev_recursion(s);
	}
	else if(i != 0)
	{
		i--;
		_putchar (s[i]);
		_print_rev_recursion(s);
	}
}
