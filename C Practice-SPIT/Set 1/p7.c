#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter a number:\n");
    scanf("%d",&n);
    s = n*(n+1)*(2*n+1)/6;
    printf("Sum of all squares of natural numbers upto %d is %d\n",n,s);
    return 0;
}