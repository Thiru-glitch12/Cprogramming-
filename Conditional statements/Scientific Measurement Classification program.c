#include <stdio.h>

int main()
{
    int value;

    scanf("%d", &value);

    if (value < 0)
    {
        printf("Negative Measurement\n");
    }
    else if (value == 0)
    {
        printf("Neutral Measurement\n");
    }
    else if (value >= 0 && value <= 10)
    {
        printf("Low Positive\n");
    }
    else if (value >= 11 && value <= 50)
    {
        printf("Moderate Positive\n");
    }
    else
    {
        printf("Strong Positive\n");
    }

    return 0;
}
