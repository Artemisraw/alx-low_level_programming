#include <stdio.h>

/**
 *
 * main - prints numbers from 1 - 100 followed by a new line but for multiples of 3 print fizz and multiples of 5 print buzz
 * multiples of both 5 an d 3 print fizz buzz
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if( i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ( i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return (0);
}

