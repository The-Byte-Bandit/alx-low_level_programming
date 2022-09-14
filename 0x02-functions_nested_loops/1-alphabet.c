#include "main.h" 
/**
 *  main - Entry point
 *  Description:
 * 'The program prints  all english letters'
 *  Return: Always 0 (Success)
 */
int main(void)
{
        print_alphabet();
        return (0);
}

void print_alphabet(void)
{
        char ch;
         for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
}
