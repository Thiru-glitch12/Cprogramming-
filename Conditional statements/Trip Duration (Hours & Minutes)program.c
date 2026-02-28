#include <stdio.h>

int main()
{
    int sh, sm, eh, em;
    int startMinutes, endMinutes, diff;

    scanf("%d %d", &sh, &sm);
    scanf("%d %d", &eh, &em);

    startMinutes = sh * 60 + sm;
    endMinutes = eh * 60 + em;

    diff = endMinutes - startMinutes;

    printf("%d hours %d minutes\n", diff / 60, diff % 60);

    return 0;
}
