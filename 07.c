// Use if-else to check whether a number is even or odd
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    
    return 0;
}