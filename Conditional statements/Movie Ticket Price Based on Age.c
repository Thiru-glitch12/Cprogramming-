#include <stdio.h>
int main()
{
    int age;
    float price;
    scanf("%d", &age);
    if (age < 0)
    {
        printf("Invalid age.\n");
        return 0;
    }
    else if (age <= 12)
    {
        price = 100.0;
        printf("Category: Child\n");
    }
    else if (age <= 19)
    {
        price = 150.0;
        printf("Category: Teenager\n");
    }
    else if (age <= 60)
    {
        price = 200.0;
        printf("Category: Adult\n");
    }
    else
    {
        price = 120.0;
        printf("Category: Senior Citizen\n");
    }

    printf("Ticket Price: Rs. %.2f\n", price);

    return 0;
}
