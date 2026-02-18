#include <stdio.h>
int main()
{
    float rate;
    scanf("%f", &rate);
    if (rate >= 80){
        printf("Highest Priority Agent\n");
    }
    else{
        printf("Normal Priority Agent\n");
    }

    return 0;
}
