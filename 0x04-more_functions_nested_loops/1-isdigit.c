#include "main.h"
#include <stdio.h>

/**
 *_isdigit - checks whether a character is a digit or not
 *@c: tested character
 *Return: 1 if is it, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 60))
	{
		return (1);
	}

	return (0);
}
