#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
  printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
  unsigned int i;

  printf("Hello, my uppercase name is ");
  i = 0;
  while (name[i])
    {
      if (name[i] >= 'a' && name[i] <= 'z')
        {
	  putchar(name[i] + 'A' - 'a');
        }
      else
        {
	  putchar(name[i]);
        }
      i++;
    }
}

#include "function_pointers.h"

/**
*  print_name - A function that prints a name.
*@name: string to check
*@f: callback funcction
*Return: 1 is numm, 0 not num
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);

}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  print_name("Danton", print_name_as_is);
  print_name("Rick Harris", print_name_uppercase);
  printf("\n");
  return (0);
}
