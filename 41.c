//Input a string from the user and display the same.

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
    for(i = 0; i<len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}