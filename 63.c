//Swap two numbers using functions (call-by-reference method).

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p1, *p2, temp;
    p1 = &a;
    p2 = &b;
    printf("Before swapping: %d %d", a, b);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("\nAfter swapping: %d %d", a, b);
    return 0;
}