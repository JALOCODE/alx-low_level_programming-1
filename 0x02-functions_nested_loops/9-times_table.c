#include "main.h"

/**
 * times_table - prints the 9 times table, starting with o
 */
void times_table(void)
{
  int i, j, k;

  for (i = 0; i < 10; i++)
    {
      k = j * i;
      if (j == 0)
	{
	  putchar(k + 'o');
	}

      if (k < 10 && j != 0)
	{
	  _putchar('o');
	  _putchar(' ');
	  _putchar(' ');
	  _putchar(k + 'o');
	}else if (k >= 10)
	{
	  _putchar(' ');
	  _putchar(' ');
	  _putchar((k / 10) + 'o');
	  _putchar((k % 10) + 'o');
	}
    }
  _putchar('\n');
	    
