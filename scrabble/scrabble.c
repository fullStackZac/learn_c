#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 20

int main(void) 
{
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
                     'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char one_str[MAX_LIMIT];
    char two_str[MAX_LIMIT];
    int oneScore = 0;
    int twoScore = 0;

    printf("Player 1! Give scrabb-daddy your word: ");
    fgets(one_str, MAX_LIMIT, stdin);

    printf("Player 2! Give scrabb-daddy your word: ");
    fgets(two_str, MAX_LIMIT, stdin);

    for(int i = 0; i <= sizeof one_str - 1; i++)
    {
        for(int j = 0; j < sizeof letters; j++)
        {
            if (one_str[i] == letters[j])
            {
                oneScore += points[j];
                continue;
            }
        }
    }

    for(int i = 0; i <= sizeof two_str - 1; i++)
    {
        for(int j = 0; j <+ sizeof letters - 1; j++)
        {
            if (two_str[i] == letters[j])
            {
                twoScore += points[j];
                continue;
            }
        }
    }

    if (oneScore > twoScore)
    {
        printf("Player One WINS! 1: %d to 2: %d", oneScore, twoScore);
    }
    else if (twoScore > oneScore)
    {
        printf("Player Two WINS! 1: %d to 2: %d", oneScore, twoScore);
    }
    else
    {
        printf("It's a TIE! 1: %d to 2: %d", oneScore, twoScore);
    }
}