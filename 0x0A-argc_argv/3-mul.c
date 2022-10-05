#include "main.h"
#include <stdio.h>

/**
 * main - a program that multiply arguments passed into it and prints them.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count = 1;

if (argc < 2)
{
	printf("Error\n");
	return (1);
}
else
	count *= argv[1];
	count *= argv[2];
	printf("%d\n", count);
	return (0);
}
