#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,sum,i,c=0,k,flag=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    sq=n*n;
    for(i=0;sq>0;i++)
    {
        sq=sq/10;
        c++;
    }
    sq = n*n;
    for(i=1;i<=c;i++)
    {
        k = pow(10,i);
        sum = sq/k + sq%k;
        if(sum==n)
        {
            printf("%d is a kaprekar number",n);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is not a kaprekar number",n);
    return 0;
}