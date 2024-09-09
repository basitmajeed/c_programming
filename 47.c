//Search for an element in an integer array (Linear search).

#include <stdio.h>

int main(){
    int a[8] = {7,1,6,5,9}, target, pos;
    printf("Enter element to find: ");
    scanf("%d", &target);
    for(int i = 0; i <8; i++)
    {
        if (a[i] == target)
        {
            pos = i;
            printf("Element found at index: %d", pos);
            return 0;
        }
    }
    printf("Elemnt not found in array");
    return 0;
}