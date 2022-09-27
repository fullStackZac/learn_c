#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
  float regular;
  printf("Regular Price: ");
  scanf("%f", &regular);

  int percentOff;
  printf("Percent Off: ");
  scanf("%i", &percentOff);

  float sale = discount(regular, percentOff);
  printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
  return price * (100 - percentage) / 100;
}