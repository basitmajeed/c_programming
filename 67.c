//Sort an integer array using functions and pointers.

#include <stdio.h>
int sortFunc(int [], int);

int main()
{
    int arr[5] = {5, 2, 8, 1, 9}, len;
    len = sizeof(arr)/sizeof(arr[0]);
    sortFunc(arr, len);
    return 0;
}

int sortFunc(int arr[], int len)
{
    int *p, temp, looplen;
    p = &arr[0];
    len--;
    looplen = len;
    while(looplen > 1)
    {
        for(int i = 0; i < len-1; i++)
        {
            if(*(p+i) > *(p+i+1))
            {
                temp = *(p+i);
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
        looplen --;
    }
    for (int i = 0; i <= len ; i++)
    {
        printf("%d ", *(p+i));
    }
    
    return 0;
}