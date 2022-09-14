#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10x
 * Return: Nothing.
 */



void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	}
}
