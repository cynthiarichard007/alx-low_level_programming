#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if a character is uppercase or not
 *@c: character to be tested
 *Return: 1 whether is it, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
