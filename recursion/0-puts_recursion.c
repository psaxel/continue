#include "main.h"
/**
 * puts2 -print 0 2 4 6 8 10 ...
 *@str: array
 */
int i = 0;

void _puts_recursion(char *s)
{

	if (s[i] != '\0')
	{
		_putchar (s[i]);
		i++;
		_puts_recursion(s);
	}
	else
	_putchar ('\n');
}
