#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int n,i,p;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p = prime(i);
            if (p==0)
                printf("%d ",i);
        }
    }
    return 0;
}

int prime(int n)
{
    int i;
    if(n==1)
        return 1;
    else if(n>1)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return 1;
        }
    }
    return 0;
}