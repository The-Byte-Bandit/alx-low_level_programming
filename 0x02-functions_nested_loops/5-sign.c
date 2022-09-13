#include "holberton.h"
/**
 * main - Entry point
 * Description:
 *'The program prints the sign of a number.'
 * Return: Always 0 (Success)
 */

int  print_sign( int n);
int main(void)
{
   int us =  6;
   print_sign(us);
    return (0);
}

int  print_sign (int n)
{
    if(n > 0)
    {

        printf("\n +");
        return (1);
    }else if (n == 0)
    {
        printf("\n %d", 0);
        return (0);
    }  
    else
    {
        printf("\n -");
        return (-1);
    }
}
