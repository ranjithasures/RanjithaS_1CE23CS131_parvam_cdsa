#include<stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num = 5;
    int res = factorial(num);
    printf("%d", res);
    return 0;
}