#include <stdio.h>

int main(void)
{
  char c = 'y';

  if (c == 'y' || c == 'Y')
  {
    printf("Agreed\n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("Disagree\n");
  }
  else
  {
    return 0;
  }
}