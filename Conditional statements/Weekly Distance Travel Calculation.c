#include <stdio.h>

int main()
{
    float X, totalDistance;

    scanf("%f", &X);

    totalDistance = 2 * X * 5;

    printf("Total distance traveled in a week: %.2f km\n", totalDistance);

    return 0;
}
