#include <stdio.h>

int main()
{
    float rainfall_cm, rainfall_mm;

    scanf("%f", &rainfall_cm);

    rainfall_mm = rainfall_cm * 10;

    printf("%.2f\n", rainfall_mm);

    return 0;
}
