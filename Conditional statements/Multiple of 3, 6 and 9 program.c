#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    if (n % 3 == 0 && n % 6 == 0 && n % 9 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
