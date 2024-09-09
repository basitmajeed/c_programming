// Display the series: 2 4 16 256 65536 ....... (n terms)

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    unsigned long long term = 2;
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%llu ", term);
        term *= term;  // Each term is squared
    }
    printf("\n");

    return 0;
}
