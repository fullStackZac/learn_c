#include <stdio.h>

int main(void)
{
  int choice = 2;

  switch (choice)
  {
  case 1:
    printf("You chose 1...Isn't this exciting.");
    break;
  case 2:
    printf("You chose 2...Look..I'm just trying to show I can make a switch statement in C.");
    break;
  case 3:
    printf("You chose 3, still here... Let's move along.");
    break;
  default:
    printf("Didn't choose anything eh?");
  }
}