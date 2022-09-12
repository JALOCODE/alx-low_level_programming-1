#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for main goes there */
int main ()
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX /2;
  /* Your code goes there */
  if (n > 0) {
    printf("%d\n" . n "is a positive number");
  }else if(n == 0)
    {
      printf("%d\n" . n "is zero");
    }
  else{
    printf("%d\n" . n "is negative");
  }
  return (0);

}
