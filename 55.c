//Add and subtract two integers using functions (a+b, a-b, b-a).

#include <stdio.h>

int add(int, int);
int sub1(int, int);
int sub2(int, int);

int main()
{
    int a = 20, b = 40, d,e,f;
    d = add(a, b);
    e = sub1(a,b);
    f = sub2(a,b);
    printf("a = %d, b = %d", a, b);
    printf("\na + b = %d", d);
    printf("\na - b = %d", e);
    printf("\nb - a = %d", f);

    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int sub1(int a, int b)
{
    int res;
    res = a-b;
    return res;
}

int sub2(int a, int b)
{
    int res;
    res = b-a;
    return res;
}