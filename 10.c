// Use nesting of if-else (compare three numbers)
#include <stdio.h>

int main() {
   int num1, num2, num3;
    printf("Enter three numbers to find the largest: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the largest\n", num1);
        } else {
            printf("%d is the largest\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the largest\n", num2);
        } else {
            printf("%d is the largest\n", num3);
        }
    }

    return 0;
}