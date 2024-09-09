//Check if a string is palindrome or not using pointers.

#include <stdio.h>

int main()
{
    char a[100], *p;
    int len;
    printf("Enter a string: ");
    scanf("%s", &a);
    while(a[len] != '\0')
    {
        len++;
    }
    p = &a[0];
    for(int i = 0; i < len; i++)
    {
        if(*(p+i) != *(p+len-i-1))
        {
            printf("Not a pallindrome");
            return 0;
        }
    }
    printf("Pallindrome!");
    return 0;
}