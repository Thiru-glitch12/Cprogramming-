#include <stdio.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'F') ||
        (ch >= 'a' && ch <= 'f'))
    {
        printf("Valid Hexadecimal Digit\n");
    }
    else
    {
        printf("Invalid Hexadecimal Digit\n");
    }

    return 0;
}
