#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int a,b,i,check=0;
    printf("Enter the range a to b:\n");
    scanf("%d%d",&a,&b);

    for(i=a;i+2<=b;i++)
    {
        if (i%2!=0 && (i+2)%2!=0)
        {
            if (prime(i) == 0 && prime(i+2) == 0)
            {
                printf("(%d, %d) ", i, i+2);
                check = 1;
            }
        }
    }
    if(check==0)
        printf("No prime pairs found");
    return 0;
}
int prime(int n)
{
    if (n == 1)
        return 1;
    else if (n > 1)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 1;
        }
    }
    return 0;
}