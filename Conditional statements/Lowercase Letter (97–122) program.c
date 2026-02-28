#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase\n");
    }
    else
    {
        printf("Not Lowercase\n");
    }
    return 0;
}
