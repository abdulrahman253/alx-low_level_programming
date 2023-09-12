#include "main.h"
/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int print_sign(int n)
{
	if ((n >= 97 && n <= 122) || (n >=65 && n <= 90))
	{
		return (1);
	}
	return (0);
}
