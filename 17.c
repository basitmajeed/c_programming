// Find product of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of the series from 1 to %d is %d\n", n, product);

    return 0;
}
