// Display table of all integers from 2 to 10 (2x1=2, 2x2=4, ……., 10x10=100)

#include <stdio.h>

int main() {
    printf("Multiplication tables from 2 to 10:\n");

    for (int i = 2; i <= 10; i++) {
        printf("Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Blank line between tables
    }

    return 0;
}
