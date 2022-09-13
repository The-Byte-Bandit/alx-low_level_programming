#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *  * main - Entry point
 *   * Description:
 *    *'The program prints  all english letters'
 *     * Return: Always 0 (Success)
 *      */

int _islower (char alphabet);
int main(void)
{
	    char me = 'e';
	       int us = _islower(me);
	          printf("\n %d", us);
		      return (0);
}

int _islower (char alphabet)
{
	    if(islower(alphabet) != 0)
		        {
				        return ("wow",0);
					    }else
						        {
								        return ("waw",0);
									    }
}
