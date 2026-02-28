#include <stdio.h>

int main()
{
    int n, rev = 0, temp, digit;

    scanf("%d", &n);

    if (n >= 1000 && n <= 9999)
    {
        temp = n;

        while (temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if (rev == n)
        {
            printf("Palindrome\n");
        }
        else
        {
            printf("Not Palindrome\n");
        }
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}
