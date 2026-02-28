#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n >= 30.5 && n <= 40.2)
    {
        printf("Within Range\n");
    }
    else
    {
        printf("Out of Range\n");
    }
    return 0;
}
