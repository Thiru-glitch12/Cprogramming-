#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Not Uppercase\n");
    }
    return 0;
}
