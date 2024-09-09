// Display the digits of any natural number in reverse order [Use while loop]

#include <stdio.h>

int main() {
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Digits in reverse order: ");
    while (n > 0) {
        printf("%d ", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}
