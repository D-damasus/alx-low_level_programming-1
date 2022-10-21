#include <stdio.h>
#include "main.h"
/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 
 * it prints Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0 )
			_putchar("FizzBuzz");
		else if (x % 3 == 0)
			_putchar("Fizz");
		else if (x % 5 == 0)
			_putchar("Buzz");
		else
			_putchar("%i", x);
		if (x < 100)
			_putchar(" ");
	}
	_putchar("\n");
	return (0);
}
