// Display the series: 2 4 8 16 32 64 128 ....... (n terms)

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 2;
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2;  // Each term is doubled
    }
    printf("\n");

    return 0;
}
