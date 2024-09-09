//Demonstrate the use of string library functions: strlen(), strcpy(), strcat(), strcmp() 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int length;

    printf("Enter the first string: ");
    scanf("%s", str1); 
    strcpy(str2, str1);
    printf("Copied string (str2): %s\n", str2);

    length = strlen(str1);
    printf("Length of the string (str1): %d\n", length);

    printf("Enter another string: ");
    scanf(" %s", str3); 
    strcat(str2, str3);
    printf("Concatenated string (str2): %s\n", str2);

    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}