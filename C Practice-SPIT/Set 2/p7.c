#include<stdio.h>
int main()
{
    int n,fre[100],r,i,j,k,count=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        r = n % 10;
        fre[i] = r;
        n = n / 10;
    }
    for(k=0;k<10;k++)
    {
        count=0;
        for(j=0;j<i;j++)
        {
            if(fre[j]==k)
            {
                count++;
            }
        }
        if(count)
            printf("%d occurs %d times\n",k,count);
    }
    return 0;
}