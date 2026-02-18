#include <stdio.h>
int main()
{
    float salary, bonus = 0;
    char gender;
    scanf("%f", &salary);
    scanf(" %c", &gender);
    if (gender == 'M' || gender == 'm'){
        bonus = salary * 0.10;
    }
    else if (gender == 'F' || gender == 'f'){
        bonus = salary * 0.15;
    }
    else{
        printf("Invalid gender\n");

    printf("Final Salary = %.2f\n", salary + bonus);
    }
    return 0;
}
