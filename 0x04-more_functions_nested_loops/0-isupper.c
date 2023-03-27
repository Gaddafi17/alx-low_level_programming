#include "main.h"
#include <stdio.h>

/**
 * 0-isupper.c
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
