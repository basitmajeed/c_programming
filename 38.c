// Input an integer array from the user and display the same.

#include <stdio.h>

int main(){
    int len, i, a[100];
    printf("Enter length of Array: ");
    scanf("%d", &len);

    for(i=0; i<len; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Elements of Array are: ");
    for(i=0; i<len; i++){
        printf("%d ", a[i]);
    }

    return 0;
}