#include "main.h"
#include <stdio.h>

/**
 * _isdigit(int c) - checks for digits 0-9
 *
 * @c - variable from the main funtion
 *
 * Return: Always 0;
 *
 */

int _isdigit(int c)
{
	if(c>='0' && c<='9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
