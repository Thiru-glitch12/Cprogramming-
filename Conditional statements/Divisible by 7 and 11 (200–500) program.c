#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 200 && n <= 500)
    {
        if (n % 7 == 0 && n % 11 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
