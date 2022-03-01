#include<stdio.h>
int power(int,int);
int main()
{
    int x,n;
    printf("Enter number and power:\n");
    scanf("%d%d",&x,&n);
    printf("%d^%d = %d",x,n,power(x,n));
    return 0;
}
int power(int x,int n)
{
    int p=1;
    while(n>0)
    {
        if (n%2==1)
            p=p*x;
        x=x*x;
        n=n/2;
    }
    return p;
}