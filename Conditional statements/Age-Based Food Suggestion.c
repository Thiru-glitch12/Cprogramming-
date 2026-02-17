#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age < 0)
    {
        printf("Invalid age entered.\n");
    }
    else if (age <= 5)
    {
        printf("Recommended Food: Mashed vegetables or soft fruits.\n");
    }
    else if (age >= 6 && age <= 12)
    {
        printf("Recommended Food: Milk, fruits, and healthy snacks.\n");
    }
    else if (age >= 13 && age <= 18)
    {
        printf("Recommended Food: Burgers or pasta (in moderation).\n");
    }
    else if (age >= 19 && age <= 50)
    {
        printf("Recommended Food: Balanced diet with rice, vegetables, and protein.\n");
    }
    else
    {
        printf("Recommended Food: Soup or grilled fish.\n");
    }

    return 0;
}
