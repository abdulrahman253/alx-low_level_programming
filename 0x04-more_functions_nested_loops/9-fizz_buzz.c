#include "main.h"
#include <stdio.h>
/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
       		 if ((n % 3 == 0) && (n % 5 == 0 ))
		 {
			 printf("fizzbuzz");
		 }
		 else if (n % 3 == 0)
		 {
			 printf("Fizz");
		 }
		 else if (n % 5 == 0)
		 {
			 printf("buzz");
		 }
		 else
		 {
			 printf(" %d ", n);
		 }
	}
	printf("\n");
	return (0);
}
