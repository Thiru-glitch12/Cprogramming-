#include <stdio.h>
int main()
{
    int symptoms;
    scanf("%d", &symptoms);
    if (symptoms < 0)
    {
        printf("Invalid input!\n");
    }
    else if (symptoms >= 5)
    {
        printf("Condition: Critical\n");
        printf("Priority Level: High\n");
    }
    else if (symptoms >= 3)
    {
        printf("Condition: Moderate\n");
        printf("Priority Level: Medium\n");
    }
    else
    {
        printf("Condition: Stable\n");
        printf("Priority Level: Low\n");
    }

    return 0;
}
