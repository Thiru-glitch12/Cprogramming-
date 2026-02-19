#include <stdio.h>
#include <math.h>
int main()
{
    double base, exponent, result;
    scanf("%lf", &base);
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("Result = %.2lf\n", result);
    return 0;
}
