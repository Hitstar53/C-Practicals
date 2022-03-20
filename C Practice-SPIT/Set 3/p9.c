#include <stdio.h>
int sum(int);
int main()
{
    int l,u,i;
    printf("Enter lower and upper range:\n");
    scanf("%d %d",&l,&u);
    printf("Perfect Numbers are: ");
    for(i=l;i<=u;i++)
        if(sum(i)==i)
            printf("%d ",i);
    return 0;
}
int sum(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}