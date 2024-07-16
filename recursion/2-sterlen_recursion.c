#include "main.h"
/**
 * puts2 -print 0 2 4 6 8 10 ...
 *@str: array
 */
int i = 0;

int _strlen_recursion(char *s)
{

	if (s[i] != '\0')
	{
		i++;
		_strlen_recursion(s);
	}

	return (i + 1);
}
