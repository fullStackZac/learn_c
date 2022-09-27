#include <stdio.h>

int main(void)
{
  // Trying to change your grade is cheating!
  const int points = 75;

  if (points > 89)
  {
    printf("You got an A!\n");
  }
  else if (points > 79)
  {
    printf("You got a B!\n");
  }
  else if (points > 69)
  {
    printf("You got a C!\n");
  }
  else if (points > 59)
  {
    printf("You got a D!\n");
  }
  else
  {
    printf("You got an F!!!\n");
  }
}