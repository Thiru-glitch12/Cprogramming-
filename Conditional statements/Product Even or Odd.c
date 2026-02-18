#include <stdio.h>
int main()
{
    int a, b, product;
    scanf("%d %d", &a, &b);
    product = a * b;
    if (product % 2 == 0){
        printf("Product is Even\n");
    }
    else{
        printf("Product is Odd\n");
    }

    return 0;
}
