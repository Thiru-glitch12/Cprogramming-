#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f", &x);
    scanf("%f", &y);
    if (x == 0 && y == 0){
        printf("Point is at the Origin\n");
    }
    else if (x == 0){
        printf("Point lies on Y-axis\n");
    }
    else if (y == 0){
        printf("Point lies on X-axis\n");
    }
    else if (x > 0 && y > 0){
        printf("First Quadrant\n");
    }
    else if (x < 0 && y > 0){
        printf("Second Quadrant\n");
    }
    else if (x < 0 && y < 0){
        printf("Third Quadrant\n");
    }
    else{
        printf("Fourth Quadrant\n");
    }

    return 0;
}
