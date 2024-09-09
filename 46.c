// Find sum of all elements of an integer array.

#include <stdio.h>

int main()
{
    int a[5]= {6,8,10,11,15}, sum = 0;
    for(int i = 0; i<5; i++)
    {
        sum += a[i];
    }
    printf("The sum of elements of array is: %d", sum);

    return 0;
}