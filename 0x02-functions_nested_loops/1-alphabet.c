#include "main.h"

/**
 * Print_alphabet - a function that prints the alphabet, in lower case.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
  char n;

  for(n = "a"; n <= "z"; n++;)
    {
      _putchar(n);
    }
  _putchar('\n');
}
