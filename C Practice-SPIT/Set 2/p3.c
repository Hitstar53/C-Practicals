#include<stdio.h>
int main()
{
    int n,p=1,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Multiplication table of %d:\n",n);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
    return 0;
}