#include<stdio.h>
int power(int, int);
int main()
{
    int x,n,res;
    printf("Enter the exponent and power:\n");
    scanf("%d %d", &x, &n);
    res = power(x, n);
    printf("%d^%d = %d", x, n, res);
    return 0;
}
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}