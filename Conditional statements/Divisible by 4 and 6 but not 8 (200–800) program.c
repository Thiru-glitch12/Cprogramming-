#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n >= 200 && n <= 800)
    {
        if (n % 4 == 0 && n % 6 == 0 && n % 8 != 0)
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
