//Display contents of a string in reverse order using pointers.

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
    p = &a[len-1];
    for(int i = 0; i < len; i++)
    {
        printf("%c", *(p-i));
    }
    return 0;
}