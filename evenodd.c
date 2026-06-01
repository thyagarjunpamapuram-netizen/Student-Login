#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 1)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}
