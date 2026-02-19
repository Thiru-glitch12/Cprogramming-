#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 9 == 0 || num % 10 == 9) {
        printf("The number is Buzz number");
    } else {
        printf("The number is not Buzz number");
    }
    return 0;
}
