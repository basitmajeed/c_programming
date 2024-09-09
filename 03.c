//Read two numbers from keyboard and compare them
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers to compare: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }

    return 0;
}