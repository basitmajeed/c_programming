//Display contents of an array using pointers.

#include <stdio.h>

int main()
{
    int a[5] = {6, 85, 9, 3, 22}, len;
    int *p;
    p = &a[0];
    len = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < len; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}