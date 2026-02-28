#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d >= 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        if (root1 >= -10 && root1 <= 10 && root2 >= -10 && root2 <= 10)
        {
            printf("%.2f %.2f\n", root1, root2);
        }
        else
        {
            printf("Roots out of range\n");
        }
    }
    else
    {
        printf("Imaginary roots\n");
    }

    return 0;
}
