//Display contents of a character array.

#include <stdio.h>

int main(){
    int len, i;
    char a[100];

    printf("Enter length of Array: ");
    scanf("%d", &len);

    for(i=0; i<len; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%c", &a[i]);
    }

    printf("Elements of Array are: ");
    for(i=0; i<len; i++){
        printf("%c ", a[i]);
    }

    return 0;
}