#include <stdio.h>

int main()
{
    int p1, p2;

    scanf("%d %d", &p1, &p2);

    if (p1 > 2 || p2 > 2 || p1 < 0 || p2 < 0)
    {
        printf("Invalid Input\n");
    }
    else if (p1 == p2)
    {
        printf("Draw\n");
    }
    else if ((p1 == 0 && p2 == 2) ||
             (p1 == 1 && p2 == 0) ||
             (p1 == 2 && p2 == 1))
    {
        printf("Player 1 Wins\n");
    }
    else
    {
        printf("Player 2 Wins\n");
    }

    return 0;
}
