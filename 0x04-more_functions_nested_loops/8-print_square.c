#include "main.h"
/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares and number of times
  *
  * Return: empty
  */
void print_square(int size)
{
	int n , j;

    if (size <= 0)
    {
        putchar('\n');
    }
    else
    {
        for(n = 0 ; n <= size ; n++)
        {
            for(j = 0 ; j <= size ; j++)
            {
                putchar(35);
            }
        putchar('\n');
        }
    }
}
