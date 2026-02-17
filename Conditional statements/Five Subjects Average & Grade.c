#include <stdio.h>

int main()
{
    float phy, chem, bio, math, comp, avg;
    scanf("%f", &phy);
    scanf("%f", &chem);
    scanf("%f", &bio);
    scanf("%f", &math);
    scanf("%f", &comp);
    avg = (phy + chem + bio + math + comp) / 5;
    printf("Average: %.2f\n", avg);
    if (avg >= 90)
    {
        printf("Grade: A\n");
    }
    else if (avg >= 80)
    {
        printf("Grade: B\n");
    }
    else if (avg >= 70)
    {
        printf("Grade: C\n");
    }
    else if (avg >= 60)
    {
        printf("Grade: D\n");
    }
    else if (avg >= 50)
    {
        printf("Grade: E\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
