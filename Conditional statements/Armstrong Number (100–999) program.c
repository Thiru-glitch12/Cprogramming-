#include <stdio.h>
int main()
{
    int n, temp, sum = 0, digit;
    scanf("%d", &n);
    if (n >= 100 && n <= 999)
    {
        temp = n;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if (sum == n)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
