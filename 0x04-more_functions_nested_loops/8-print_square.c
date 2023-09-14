#include "main.h"

/**
  * print_square - Print n squares according to number of times
  * @size: The number of squares and number of times
  *
  * Return: empty
  */
void print_square(int size)
{
	int n, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
