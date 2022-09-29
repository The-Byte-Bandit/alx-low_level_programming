#include "main.h"

/**
 * _print_rev_recursion - a function that concatenates two strings.
 * @c: an input string
 * @src: an input string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
void _print_rev_recursion(char *s)
{
    if(*s == '\0')
    return;
    _print_rev_recursion((s + 1));
    _putchar(*s);

}
