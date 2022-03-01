#include<stdio.h>
int sum(int);
int amicable(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(amicable(a,b))
        printf("%d and %d are amicable numbers\n",a,b);
    else
        printf("%d and %d are not amicable numbers\n",a,b);
    return 0;
}
int amicable(int a,int b)
{
    if(sum(a)==b && sum(b)==a)
        return 1;
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