#include<stdio.h>
int main()
{
    int a,b,gcd,lcm,i;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm = (a*b)/gcd;
    printf("GCD = %d\nLCM = %d\n",gcd,lcm);
    return 0;
}