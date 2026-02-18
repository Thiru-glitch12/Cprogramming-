#include <stdio.h>
int main()
{
    int age;
    float tuition, expenses;
    scanf("%d", &age);
    scanf("%f", &tuition);
    scanf("%f", &expenses);
    if (age >= 18 && age <= 25)
    {
        if (tuition > expenses){
            printf("Tuition fee is higher than expenses.\n");
        }
        else{
            printf("Expenses are higher or equal to tuition fee.\n");
        }
    }
    else
    {
        printf("Age not in range 18-25.\n");
    }

    return 0;
}
