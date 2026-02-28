#include <stdio.h>
#include <string.h>

int main()
{
    char choice[20];

    scanf("%s", choice);

    if (strcmp(choice, "Warrior") == 0)
    {
        printf("Extra Strength\n");
    }
    else if (strcmp(choice, "Mage") == 0)
    {
        printf("Extra Magic Power\n");
    }
    else if (strcmp(choice, "Rogue") == 0)
    {
        printf("Extra Agility\n");
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}
