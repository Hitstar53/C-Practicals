#include<stdio.h>
int series(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    series(n);
    return 0;
}
int series(int n)
{
    if(n<=0)
    {
        printf("%d ",n);
        return 0;
    }
    printf("%d ",n);
    series(n-5);
    printf("%d ",n);
}
