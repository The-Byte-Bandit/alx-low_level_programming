#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet 10x
 * Return: Nothing.
 */



void print_alphabet_x10(void)
{
	int i;
	for(i = 0; i < 10; i++ )
	{
	for (char ch = 'a'; ch <= 'z'; ch++);
	{
	putchar(ch);
	}
	putchar('\n');
	}
}
