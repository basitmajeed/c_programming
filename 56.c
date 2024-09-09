//Search an array using functions (passing array to a function).

#include <stdio.h>

int find(int [], int, int);

int main(){
    int arr[5] = {6, 12, 9, 35, 5}, target, len;
    printf("Enter element to find: ");
    len = sizeof(arr)/sizeof(arr[0]);
    scanf("%d", &target);
    find(arr, target, len);
}

int find(int arr[], int target, int len)
{
    int pos;
    for(int i = 0; i <len; i++)
    {
        if(arr[i] == target)
        {
            pos = i;
            printf("Element found at index %d", pos);
            return 0;
        }
    }
    printf("Elemnt not foun in array");
    return 0;
}