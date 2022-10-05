#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count;

if (argc >= 1)
{
<<<<<<< HEAD
		for (count = 0; count < argc; count++)
		{
		printf("%s\n", argv[count]);
		}
=======
	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
>>>>>>> 4fe1bd181ee5c5a1283c77d024fbd06933ebfa6d
}
	return (0);
}
