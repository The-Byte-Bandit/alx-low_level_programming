#include "main.h"

/**
 * int _islower - Check description
 * Description: Returns 1 if c is lowercase else eturns 0
 * Return: Nothing.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	{
	lower = 1;
	break;
	}

}

return (lower);
}

