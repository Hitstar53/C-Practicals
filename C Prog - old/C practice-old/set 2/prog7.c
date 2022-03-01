#include<stdio.h>
int main()
{
    int a,b,c,sum;

    printf("Enter angles of the triangle:\n");
    scanf("%d %d %d",&a, &b, &c);

    sum = a+b+c;

    if(sum==180)
    printf("This triangle is Valid!");
    else
    printf("This triangle is Invalid!");

    return 0;
}