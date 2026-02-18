#include <stdio.h>
int main()
{
    float speedLimit, vehicleSpeed;
    scanf("%f", &speedLimit);
    scanf("%f", &vehicleSpeed);
    if (vehicleSpeed > speedLimit){
        printf("Warning! Speed limit exceeded.\n");
    }
    else{
        printf("Within speed limit.\n");
    }

    return 0;
}
