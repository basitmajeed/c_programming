//Check whether a string is palindrome or not.

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
        if(str[i] != str[len-i-1])
        {
            printf("Not a pallindrome!");
            return 0;
        }
    }
    printf("Pallindrome!");

    return 0;
}