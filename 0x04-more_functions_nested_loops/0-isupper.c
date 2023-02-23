#include "main.h"
#include <stdio.h>

/**
 * _isupper(c) checks for upper case character
 *
 * @c comes from the main funtion to be checked
 *
 * REturns: Always 0;
 *
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
