#include<stdio.h>
int main()
{
    int num,t,s,r;

    printf("Enter number:\n");
    scanf("%d",&num);

    while (num>0)
    {
        r = num%10;
        r += 1;
        s = s*10 + r;
        num = num/10;
    }

    while (s > 0)
    {
        r = s % 10;
        t = t * 10 + r;
        s = s / 10;
    }

    printf("Number obtained after adding 1 to each digit: %d",t);
    return 0;
}