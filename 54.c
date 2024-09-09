//Swap two numbers using functions (call-by-value method).

#include <stdio.h>
void swap(int, int);

int main()
{
    int a = 10, b = 20;
    printf("Before swapping, a = %d and b = %d", a, b);
    swap(a,b);

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping, a = %d, b = %d", a, b);
}