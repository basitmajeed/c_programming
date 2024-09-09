// Display Fibonacci series up to n terms using recursion.

#include <stdio.h>

void fib(int, int);

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    fib(n, 0);
    return 0;
}

void fib(int n, int count) {
    static int a = 0, b = 1;
    if (count < n) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
        fib(n, count + 1);
    }
}
