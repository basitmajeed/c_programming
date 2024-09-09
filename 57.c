//Find factorial of a number using recursion.

#include <stdio.h>
int fact(int);

int main()
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = fact(num);
    printf("Factorial of %d is %d", num, res);
}

int fact(int num)
{
    if(num == 0 || num == 1) { 
        return 1;
    } 
    else {
        return num * fact(num - 1); 
    }
}