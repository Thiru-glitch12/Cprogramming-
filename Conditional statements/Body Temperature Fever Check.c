#include <stdio.h>
int main()
{
    float temp;
    scanf("%f", &temp);
    if (temp >= 37){
        printf("The individual has a fever.\n");
    }
    else{
        printf("The individual does not have a fever.\n");
    }

    return 0;
}
