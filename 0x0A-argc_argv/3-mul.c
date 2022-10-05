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
int main(int argc, char **argv)
{
	int num = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		num *= atoi(argv[1]);
		num *= atoi(argv[2]);
		printf("%d\n", num);
		return (0);
}
