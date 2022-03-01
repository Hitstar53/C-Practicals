#include<stdio.h>
int fact(int);
int main()
{
    int n,r,res;
    printf("Enter n & r:\n");
    scanf("%d %d", &n, &r);
    if(r>n)
        printf("r should be less than n to calculate nPr");
    else
    {
        res = fact(n)/(fact(n-r));
        printf("nPr = %d", res);
    }
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}