#include <stdio.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age <= 12)
    {
        printf("Child Discount\n");
    }
    else
    {
        printf("Regular Ticket\n");
    }

    return 0;
}
