#include "main.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;	
	}
	_putchar ('\n');
	i++;
	}
}
