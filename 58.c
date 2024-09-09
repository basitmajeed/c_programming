//Implement Ackermann Function using recursion.
#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m = 3, n = 4;
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    return 0;
}
