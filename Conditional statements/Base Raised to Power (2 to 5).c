#include <stdio.h>

int main()
{
    int base, power, result = 1, i;

    scanf("%d %d", &base, &power);

    if (power >= 2 && power <= 5)
    {
        for (i = 1; i <= power; i++)
        {
            result = result * base;
        }
        printf("%d\n", result);
    }
    else
    {
        printf("Invalid power\n");
    }

    return 0;
}
