#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);
    return 0;
}