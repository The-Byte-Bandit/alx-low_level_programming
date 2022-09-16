#include "main.h"

/**
 * _isupper - function that checks for alphabetic character
 *
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
