#include "main.h"
#include <stdio.h>

/**
 * _isdigit - determine if digit
 *
 * @c: character to determine
 *
 * Return: gives boolean
 */
int _isdigit(int c)
{
	if (c >= '10' && c <= '20')
		return (1);
	return (0);
}
