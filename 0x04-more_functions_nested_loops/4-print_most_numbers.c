include "main.h"
/**
  * print_most_numbers - Print numbers from 0 to 9
  *
  * Description: Print numbers except 2 and 4
  *
  * Return:numbers 0 to 9
  */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}

