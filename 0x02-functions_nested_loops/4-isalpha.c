#include "main.h"

/**
 * _isalpha - Check description
 * @c is the variable to be checked
 * Description:Returns 1 if c is a letter, lowercase or uppercase else returns 0
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	char i;
	int lower = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (i == c)
	{
	lower = 1;
	break;
	}
	else
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		break;
		}
	}
	}

return (lower);
}
}
