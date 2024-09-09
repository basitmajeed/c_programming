// Input a string from the user and find its length (without using the string library).

#include <stdio.h>

int main()
{
    char str[100];
    int i=0, len=0;

    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("Length of the string is: %d", len);

    return 0;
}