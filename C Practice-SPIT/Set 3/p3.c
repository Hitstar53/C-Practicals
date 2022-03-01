#include<stdio.h>
#include<math.h>
int checkprime(int);
int main()
{
    int n,i,j,flag=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(checkprime(i)==1 && checkprime(j)==1 && i+j==n)
            {
                printf("%d + %d = %d\n",i,j,n);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("Number cannot be expressed as sum of primes\n");
    }
    return 0;
}
int checkprime(int n)
{
    int i;
    if(n==1 || n==0)
        return 0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}