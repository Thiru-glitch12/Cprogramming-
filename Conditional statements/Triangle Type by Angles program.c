#include <stdio.h>

int main()
{
    int a, b, c, sum;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum != 180)
    {
        printf("Invalid\n");
    }
    else
    {
        if (a == 90 || b == 90 || c == 90)
        {
            printf("Right Triangle\n");
        }
        else if (a < 90 && b < 90 && c < 90)
        {
            printf("Acute Triangle\n");
        }
        else
        {
            printf("Obtuse Triangle\n");
        }
    }

    return 0;
}
