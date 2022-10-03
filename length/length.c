#include <stdio.h>

int main(void)
{
  char name[] = "Zachary";

  int i = 0;

  while (name[i] != '\0')
  {
    i++;
  }
  printf("%i\n", i);
}