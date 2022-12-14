#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print lowercase letters followed by a line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
