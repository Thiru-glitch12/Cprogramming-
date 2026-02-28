#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 1024)
    {
        if ((n & (n - 1)) == 0)
        {
            printf("Power of Two\n");
        }
        else
        {
            printf("Not Power of Two\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
