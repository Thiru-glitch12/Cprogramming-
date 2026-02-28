#include <stdio.h>

int main()
{
    float f, c;

    scanf("%f", &f);

    if (f >= 0 && f <= 100)
    {
        c = (f - 32) * 5 / 9;
        printf("%.2f\n", c);
    }
    else
    {
        printf("Out of range\n");
    }

    return 0;
}
