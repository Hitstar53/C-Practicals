#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of all even numbers upto %d = %d",n,sum);
    return 0;
}