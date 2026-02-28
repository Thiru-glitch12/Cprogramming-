#include <stdio.h>
int main()
{
    float amount, discount;
    scanf("%f", &amount);
    if (amount < 1000)
    {
        discount = amount * 0.05;
    }
    else if (amount < 5000)
    {
        discount = amount * 0.10;
    }
    else
    {
        discount = amount * 0.15;
    }
    printf("Discount: %.2f\n", discount);
    return 0;
}
