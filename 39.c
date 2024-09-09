//Display contents of an integer array in reverse order.

#include <stdio.h>

int main(){
    int len, i, a[100];
    printf("Enter length of Array: ");
    scanf("%d", &len);

    for(i=0; i<len; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Elements of Arrayin reverse are: ");
    for(i=len-1; i>=0; i--){
        printf("%d ", a[i]);
    }

    return 0;
}