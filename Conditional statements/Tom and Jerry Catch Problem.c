#include <stdio.h>

int main()
{
    float X, Y, distance, time;

    scanf("%f %f %f", &X, &Y, &distance);

    if (Y <= X)
    {
        printf("Tom cannot catch Jerry\n");
    }
    else
    {
        time = distance / (Y - X);
        printf("Tom will catch Jerry\n");
        printf("Time taken: %.2f seconds\n", time);
    }

    return 0;
}
