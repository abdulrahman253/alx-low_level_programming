<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> 0d194e7260d4fdd8836a26db2c046d87284de214

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
