#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 100 && n <= 300)
    {
        if (n % 3 == 0 && n % 5 != 0)
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
