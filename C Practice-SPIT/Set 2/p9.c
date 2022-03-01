#include<stdio.h>
int main()
{
    int bin,comp[50],t,r,i;
    printf("Enter the binary number:\n");
    scanf("%d",&bin);
    t = bin;
    for(i=0;t>0;i++)
    {
        r = t % 10;
        comp[i] = (r==1)?0:1;
        t = t / 10;
    }
    printf("1's complement is: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",comp[i]);
    }
    return 0;
}