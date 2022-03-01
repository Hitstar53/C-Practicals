#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number:\n");
    scanf("%d",&n);

    if(n==1)
        flag=0;
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                flag=0;
                break;
            }
        }
    }

    if(flag)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}