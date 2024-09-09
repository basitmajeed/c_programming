// Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    unsigned long long a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%llu ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
