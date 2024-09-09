//Sort an integer array using Bubble Sort.

#include <stdio.h>

int main()
{
    int a[5] = {7,1,6,5,9}, len, looplen, temp;
    len = sizeof(a)/sizeof(a[0]);
    printf("Unsorted array: ");
    for(int i =0; i<len; i++)
    {
        printf("%d ", a[i]);
    }
    looplen = len - 1;
    while(looplen >=0)
    {
        for(int i =0; i <looplen; i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        looplen--;
    }
    printf("\nSorted array: ");
    for(int i =0; i<len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}