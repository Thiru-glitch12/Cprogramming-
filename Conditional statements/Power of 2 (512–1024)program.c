#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 512 && n <= 1024)
    {
        if ((n & (n - 1)) == 0)
        {
            printf("Power of 2\n");
        }
        else
        {
            printf("Not Power of 2\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }
    return 0;
}
