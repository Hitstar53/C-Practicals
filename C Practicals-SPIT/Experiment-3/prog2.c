#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum of Proper divisors = %d",sum(n));
    return 0;
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}