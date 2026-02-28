#include <stdio.h>
int main()
{
    float num;
    scanf("%f", &num);
    if (num > 10.5 && num < 20.3)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}
