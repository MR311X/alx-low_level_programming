#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all numbers from n to 98
  * @n: integer to begin the count
  * Return: returns 0
  */
void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i < 99; i++)
			printf("%d, ", i);		
	}
	else 
	{
		for (i = n; i > 99; i--)
			printf("%d, ", i);
	}

	printf("\n");
}
