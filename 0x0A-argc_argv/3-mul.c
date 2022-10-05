#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that multiply arguments passed into it and prints them.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count, tmp, sum = 1;

if (argc < 2)
{
	printf("Error\n");
	return (1);
}
else
	for (count = 1; count < (argc + 1); count++)
	{
		tmp = atoi(argv[count]);
		sum *= tmp;
	}
	printf("%d\n", sum);
	return (0);
}
