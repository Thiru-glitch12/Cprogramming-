#include <stdio.h>
int main()
{
    float investment, purchasePrice, currentPrice;
    float profitLoss;
    scanf("%f", &investment);
    scanf("%f", &purchasePrice);
    scanf("%f", &currentPrice);
    profitLoss = currentPrice - purchasePrice;
    if (profitLoss > 0)
    {
        printf("Profit: %.2f\n", profitLoss);
    }
    else if (profitLoss < 0)
    {
        printf("Loss: %.2f\n", -profitLoss);
    }
    else
    {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
