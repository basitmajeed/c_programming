// Use ternary operator
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int max = (x > y) ? x : y;
    printf("The maximum of %d and %d is %d\n", x, y, max);
    
    return 0;
}