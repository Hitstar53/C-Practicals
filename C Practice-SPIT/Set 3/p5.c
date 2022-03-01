#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Number of digits = %d", count(n));
    return 0;
}
int count(int n)
{
    if(n<=0)
        return 0;
    else
        return 1+count(n/10);
}