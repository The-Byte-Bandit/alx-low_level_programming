#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *  * main - Entry point
 *   * Description:
 *    *'The program prints  all english letters'
 *     * Return: Always 0 (Success)
 *      */

int  _isalpha (char alphabet);
int main(void)
{
	    char me = 'e';
	       int us =  _isalpha(me);
	          printf("\n %d", us);
		      return (0);
}

int  _isalpha (char alphabet)
{
	    if( isalpha(alphabet) != 0)
		        {
				        return ("wow",0);
					    }else
						        {
								        return ("waw",0);
									    }
}
