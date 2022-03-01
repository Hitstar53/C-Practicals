#include<stdio.h>
int reverse(int);
int main()
{
    int a,b,rem,sum,i,j;
    for(i=10;i<=99;i++)
    {
        for(j=10;j<=99;j++)
        {
            if((reverse(i)==i) || (reverse(j)==j) || (reverse(i)==j) || (reverse(j)==i))
            {
                continue;
            }
            else if(i*j == reverse(i)*reverse(j))
            {
                printf("%d*%d = %d*%d\n",i,j,reverse(i),reverse(j));
            }
            
        }
    }
    return 0;
}
int reverse(int n)
{
    int rem,sum=0;
    while(n>0)
    {
        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }
    return sum;
}