#include <stdio.h>
int main()
{
    float side1, side2;
    scanf("%f %f", &side1, &side2);
    if (side1 == side2){
        printf("Square\n");
    }
    else{
        printf("Rectangle\n");
    }
    return 0;
}
