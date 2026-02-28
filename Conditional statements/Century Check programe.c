#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        printf("Century\n");
        printf("%d\n", year + 10);
    }
    else
    {
        printf("Not Century\n");
    }

    return 0;
}
