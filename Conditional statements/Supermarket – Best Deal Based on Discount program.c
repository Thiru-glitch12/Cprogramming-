#include <stdio.h>

int main()
{
    float price1, discount1;
    float price2, discount2;
    float price3, discount3;
    float final1, final2, final3;

    scanf("%f %f", &price1, &discount1);
    scanf("%f %f", &price2, &discount2);
    scanf("%f %f", &price3, &discount3);

    final1 = price1 - (price1 * discount1 / 100);
    final2 = price2 - (price2 * discount2 / 100);
    final3 = price3 - (price3 * discount3 / 100);

    if (final1 <= final2 && final1 <= final3)
    {
        printf("Brand 1 offers the best deal. Final Price: %.2f\n", final1);
    }
    else if (final2 <= final1 && final2 <= final3)
    {
        printf("Brand 2 offers the best deal. Final Price: %.2f\n", final2);
    }
    else
    {
        printf("Brand 3 offers the best deal. Final Price: %.2f\n", final3);
    }

    return 0;
}
