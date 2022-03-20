#include<stdio.h>
int sum(int,int);
int main()
{
    int l,u;
    printf("Enter lower and upper range: \n");
    scanf("%d %d",&l,&u);
    if(l%2==0)
    {
        printf("Sum of even numbers: %d\n",sum(l,u));
        printf("Sum of odd numbers: %d", sum(l+1, u));
    }
    else
    {
        printf("Sum of even numbers: %d\n", sum(l+1, u));
        printf("Sum of odd numbers: %d", sum(l, u));
    }
    return 0;
}
int sum(int l,int u)
{
    if(l>u)
        return 0;
    return l+sum(l+2,u);
}