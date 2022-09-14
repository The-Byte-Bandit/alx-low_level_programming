#include "main.h"
/**
 *  main - Entry point
 *  Description:
 * 'The program prints  all english letters'
 *  Return: Always 0 (Success)
 */


void print_alphabet(void)
{
        char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                _putchar(ch);
        }
        _putchar('\n');
}
