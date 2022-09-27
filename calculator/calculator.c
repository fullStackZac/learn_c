#include <stdio.h>

int main(void)
{
  int x = 5;
  int y = 10;
  int z = 15;

  printf("%i\n", x + y);
  printf("%i\n", z - x);
  printf("%i\n", y * z);
  printf("%i\n", z / x);
  printf("%i\n", z % y);
}