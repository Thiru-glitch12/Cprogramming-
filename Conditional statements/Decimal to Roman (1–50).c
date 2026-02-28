#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num < 1 || num > 50)
    {
        printf("Out of range\n");
    }
    else
    {
        while (num >= 50) { printf("L"); num -= 50; }
        while (num >= 40) { printf("XL"); num -= 40; }
        while (num >= 10) { printf("X"); num -= 10; }
        while (num >= 9)  { printf("IX"); num -= 9; }
        while (num >= 5)  { printf("V"); num -= 5; }
        while (num >= 4)  { printf("IV"); num -= 4; }
        while (num >= 1)  { printf("I"); num -= 1; }
    }

    return 0;
}
