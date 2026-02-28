#include <stdio.h>

int main()
{
    int choice;
    float r, area;

    scanf("%d", &choice);

    if (choice == 1)
    {
        scanf("%f", &r);
        area = 3.14159 * r * r;
        printf("%.2f\n", area);
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}
