#include <stdio.h>
int main()
{
    float temp, oil;
    int rpm;
    scanf("%f %f %d", &temp, &oil, &rpm);

    if (temp >= 70 && temp <= 110 &&
        oil >= 20 && oil <= 80 &&
        rpm >= 800 && rpm <= 6000)
    {
        printf("Engine Healthy\n");
    }
    else
    {
        printf("Engine Issue Detected\n");
    }

    return 0;
}
