#include <stdio.h>

void bark(int n);

int main(void)
{
  bark(10);
}

void bark(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("BARK! BARK! BARK!\n");
  }
}