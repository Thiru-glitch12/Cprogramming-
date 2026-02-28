#include <stdio.h>

int main()
{
    float num;

    scanf("%f", &num);

    if (num >= 25.0 && num <= 50.0)
    {
        if (num == (int)num)
        {
            printf("Integer\n");
        }
        else
        {
            printf("Not Integer\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
