#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %.2f\nModulus: %d",a+b,a-b,a*b,(float)a/(float)b,a%b);
    return 0;
}